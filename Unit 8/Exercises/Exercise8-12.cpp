// Exercise8-12.cpp
// Attempt to modify elements in a 
// character literal array
#include <iostream>
using namespace std;

char c[] = {"Hello"};

int main(){
	char *cp = &c[0];
	*cp = 'J';
	cout << c << endl;
}