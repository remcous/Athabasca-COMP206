// Stash2.cpp
// Stash using Mem
#include "Stash2.h"
#include "Mem.h"
#include "../../require.h"
#include <iostream>
#include <cassert>
using namespace std;
const int increment = 100;

Stash::Stash(int sz){
	size = sz;
	quantity = 0;
	next = 0;
	storage = 0;
}

Stash::Stash(int sz, int initQuantity){
	size = sz;
	quantity = 0;
	next = 0;
	storage = 0;
	inflate(initQuantity);
}

Stash::~Stash(){
	if(storage != 0){
		cout << "freeing storage" << endl;
		delete []storage;
	}
}

int Stash::add(void* element){
	if(next >= quantity)
		inflate(increment);
}

void* Stash::fetch(int index){return 0;}

int Stash::count(){
	return next;
}

void Stash::inflate(int increase){}