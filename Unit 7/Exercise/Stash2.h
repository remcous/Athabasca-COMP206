// Stash2.h
// Stash using Mem
#ifndef STASH2_H
#define STASH2_H
#include "Mem.h"

class Stash{
	int size;		// Size of each space
	int quantity;	// Number of storage spaces
	int next;		// Next empty space
	
	// Dynamically allocated array of bytes
	unsigned char* storage;
	void inflate(int increase);
public:
	Stash(int size);
	Stash(int size, int initQuantity);
	~Stash();
	int add(void* element);
	void* fetch(int index);
	int count;
};
#endif	// STASH2_H