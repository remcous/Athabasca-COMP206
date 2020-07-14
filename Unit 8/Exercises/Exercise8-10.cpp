// Exercise8-10.cpp
// show that a const pointer to a const object
// can only read the value and cannot
// change the pointer or what it points to
#include <iostream>
using namespace std;

int main(){
	const int ci = 10;
	const int* const cip = &ci;

	const int ci2 = 5;
	//! cip = &ci2;	// Not OK
	//! *cip++;		// Not OK

	cout << *cip << endl;
}