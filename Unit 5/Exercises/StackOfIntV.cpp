// StackOfIntV.cpp
// StackOfInt implemented using a vector of ints
#include "StackOfInt.h"
#include <vector>
using namespace std;

class StackOfInt::StackImp{
	friend StackOfInt;
	vector<int> stack;
};

void StackOfInt::initialize(){
	storage = new StackImp;
}

void StackOfInt::add(int x){
	storage->stack.push_back(x);
}

int* StackOfInt::fetch(int i){
	return &(storage->stack[i]);
}

int StackOfInt::count(){
	return storage->stack.size();
}

void StackOfInt::cleanup(){
	storage->stack.clear();
	delete storage;
}