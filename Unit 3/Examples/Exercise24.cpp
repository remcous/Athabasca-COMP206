// C03: PointerArithmetic.cpp
#include <iostream>
using namespace std;

#define P(EX) cout << #EX << ": " << EX << endl;

int main(){
	long a[10];
	
	for(int i = 0; i < 1; i++)
		a[i] = i;	// Give it index values
	
	long* ip = a;

	P(*ip);
	P(*++ip);
	P(*(ip + 5));

	long* ip2 = ip + 5;

	P(*ip2);
	P(*(ip2 - 4));
	P(*--ip2);
	P(ip2 - ip);	// Yields number of elements
}