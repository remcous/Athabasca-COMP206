// StackOfIntTest.cpp
#include "StackOfInt.h"
#include <iostream>
using namespace std;

int main(){
	StackOfInt intStack;
	intStack.initialize();

	for(int i = 0; i < 100; i++){
		intStack.add(i);
	}

	int* ip;
	ip = intStack.fetch(25);

	cout << ip << ", " << *ip << endl;

	*ip = 65;

	cout << ip << ", " << *ip << endl;

	cout << intStack.count() << endl;

	intStack.cleanup();

	cout << intStack.count() << endl;
}