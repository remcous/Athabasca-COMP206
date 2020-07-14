// StashTest.cpp
#include "Stash.h"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

int main(){
	Stash intStash;
	intStash.initialize(sizeof(int));

	for(int i = 0; i < 100; i++)
		intStash.add(&i);

	for(int j = 0; j < intStash.count(); j++)
		cout << "intStash.fetch(" << j << ") = "
			<< *(int*)intStash.fetch(j)
			<< endl;

	// Holds 80-Character Strings
	Stash stringStash;
	const int bufsize = 80;

	stringStash.initialize(sizeof(char) * bufsize);
	ifstream in("StashTest.cpp");
	string line;

	while(getline(in, line))
		stringStash.add(line.c_str());

	int k = 0;
	char* cp;
	while((cp = (char*)stringStash.fetch(k++)) != 0)
		cout << "stringStash.fetch(" << k << ") = "
			<< cp << endl;

	intStash.cleanup();
	stringStash.cleanup();
}