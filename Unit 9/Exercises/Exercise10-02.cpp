// Exercise10-02.cpp
// function returns next fibonacci 
// number when called, resets if argument
// is true
#include <iostream>
using namespace std;

int fibonacci(bool reset = false){
	static int f1 = 0, f2 = 1;

	if(reset){
		f1 = 0;
		f2 = 1;
	}

	int temp = f2;
	f2 += f1;

	return f1 = temp;
}

int main(){
	for(int i = 0; i < 10; i++)
		cout << fibonacci() << " ";
	cout << endl;
	cout << fibonacci(1) << endl;
}