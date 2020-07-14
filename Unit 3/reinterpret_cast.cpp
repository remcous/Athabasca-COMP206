// C03: reinterpret_cast.cpp
#include <iostream>
using namespace std;
const int sz = 100;

struct X { int a[sz]; };

void print(X* x){
	for(int i = 0; i < sz; i++)
		cout << x->a[i] << ' ';
	cout << endl << "------------------";
}

int main(){
	X x;
	print(&x);
	int* xp = reinterpret_cast<int*>(&x);
	for(int* i = xp; i < xp + sz; i++)
		*i = 0;
	// Can't use xp as an X8 at this point
	// unless you cast it back:
	print(reinterpret_cast<X*>(xp));
	// In this example, you can also just use
	// the original identifier:
	print(&x);
}