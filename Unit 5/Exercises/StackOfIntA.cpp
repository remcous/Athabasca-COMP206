// StackOfIntA.cpp
// StackOfInt implemented using a fixed array
#include "StackOfInt.h"

const int size = 100;

class StackOfInt::StackImp{
	int stack[size];
	int loc;
	friend StackOfInt;

	void initialize();
};

void StackOfInt::StackImp::initialize(){
	for(int i = 0; i < size; i++)
		stack[i] = 0;
	loc = 0;
}

void StackOfInt::initialize(){
	storage = new StackImp;
	storage->initialize();
}

void StackOfInt::add(int x){
	storage->stack[storage->loc++] = x;
}

int* StackOfInt::fetch(int x){
	return &storage->stack[x];
}

int StackOfInt::count(){
	return storage->loc;
}

void StackOfInt::cleanup(){
	storage->loc = 0;
	delete []storage;
}