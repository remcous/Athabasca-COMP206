// Stash.cpp
#include "Stash.h"
#include <vector>
#include <iostream>
#include <cassert>
using namespace std;

const int increment = 100;

void Stash::initialize(int sz){
	next = 0;
	size = sz;
	quantity = 0;
	storage.begin();
}

int Stash::add(const void* element){
	if(next >= quantity)
		inflate(increment);

	int startBytes = next * size;
	unsigned char* e = (unsigned char*) element;

	for(int i = 0; i < size; i++)
		storage[startBytes + i] = e[i];
	return next++;
}

void* Stash::fetch(int index){
	if(index < 0 || index >= next)
		return 0;
	else
		return &(storage[index * size]);
}

int Stash::count(){
	return next;
}

void Stash::inflate(int increase){
	assert(increase > 0);
	
	for(int i = 0; i < increase*size; i++)
		storage.push_back(0);
}

void Stash::cleanup(){
	if(storage.size() != 0){
		cout << "Freeing storage" << endl;
		storage.clear();
		storage.begin();
	}
}