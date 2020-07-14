// Exercise10.cpp
#include "Hen.h"
#include "Stash.h"
#include <iostream>
using namespace std;

int main(){
	Stash henStash;
	Hen* hp;

	henStash.initialize(sizeof(Hen));
	henStash.add(new Hen);
	henStash.add(new Hen);

	for(int i = 0; i < henStash.count(); i++){
		hp = static_cast<Hen*>(henStash.fetch(i));
		hp->print();
	}

	henStash.cleanup();
}