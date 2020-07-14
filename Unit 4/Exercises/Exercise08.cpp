// Exercise08.cpp
// {L} Stack.h
// Program uses the Stack object to hold 
// 25 double values and prints them 
// to the console
#include "Stack.h"
#include <iostream>
using namespace std;

int main(){
	Stack doubleList;
	doubleList.initialize();

	for(int i = 0; i < 25; i++){
		doubleList.push(new double(i*3.14));
	}

	double* d;

	while((d = (double*)doubleList.pop()) != 0){
		cout << *d << endl;
		delete d;
	}

	doubleList.cleanup();
}