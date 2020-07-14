// Exercise 7-06
// StashTest.cpp
#include "Stash.h"
#include <iostream>
using namespace std;

int main(){
	Stash intStash(sizeof(int),100);

	for(int i = 0; i < 20; i++)
		intStash.add(&i);

	for(int i = 0; i < intStash.count(); i++)
		cout << "intStash.fetch(" << i << ") = "
			<< *(int*)intStash.fetch(i) << endl;

	Stash floatStash(sizeof(float));

	for(float f = 0; f < 1.5; f += .1)
		floatStash.add(&f);

	for(int i = 0; i < floatStash.count(); i++)
		cout << "floatStash.fetch(" << i << ") = "
			<< *(float*)floatStash.fetch(i) << endl;
}