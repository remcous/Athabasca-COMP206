// C02: Numconv.cpp
// Converts decimal to octal and hex
#include <iostream>
using namespace std;

int main() {
	int number;
	cout << "Enter a decimal number: ";
	cin >> number;
	cout << "Value in octal = 0"
		<< oct << number << endl;
	cout << "Value in hex = 0x"
		<< hex << number << endl;
}