// Exercise02.cpp
// Program to print all prime numbers
#include <iostream>
using namespace std;

int main(){
	unsigned int limit;
	int factors;

	cout << "Enter the upper boundary: ";
	cin >> limit;

	for(int i = 2; i <= limit; i++){
		factors = 0;

		for(int j = 2; j < i; j++){
			if(i%j == 0)
				factors++;
		}

		if(factors == 0)
			cout << i << endl;
	}
}