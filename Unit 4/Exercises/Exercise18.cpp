// Exercise18.cpp
// use a function to dynamically allocate an
// array of char taking a char* as an argument
#include <iostream>
#include <string>
using namespace std;
char* dynamic(char* c, int length);

int main(){
	char c[] = {'H','e','l','l','o'};
	char* c1 = dynamic(c, sizeof(c));
	char* c2 = dynamic(c1, sizeof(c1));

	cout << " c: " << c << ", " << &c << endl;
	cout << "c1: " << c1 << ", " << &c1 << endl;
	cout << "c2: " << c2 << ", " << &c2 << endl;

	delete []c1;
	delete []c2;
}

char* dynamic(char* c, int length){
	char* ch = new char[length];
	char* cp = ch;

	for(int i = 0; i <= length; i++)
		cp[i] = c[i];

	return ch;
}