// Exercise05.cpp
// Test two for loops one with counter declared outside of scope, one within scope
#include <iostream>
using namespace std;

int main(){
	int i;

	for(i = 0; i<=10; i++)
		cout << i << endl;

	cout << endl << i << endl << endl;
	i = 0;

	for(int i = 0; i<=10; i++)
		cout << i << endl;

	cout << endl << i << endl;
}