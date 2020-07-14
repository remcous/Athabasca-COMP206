// Exercise22.cpp
// Create a stack that holds stashes
// the stashes will hold five lines
// from an input file
#include "CppLib.h"
#include "Stack.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
	ifstream in("Exercise22.cpp");
	Stack stashStack;
	stashStack.initialize();

	string line;
	int i = 0, ctr = 1;
	Stash* sp;
	stashStack.push(new Stash());
	sp = static_cast<Stash*>(stashStack.peek());
	sp->initialize(sizeof(char) * 100);

	while(getline(in, line)){
		if(i == 5){
			stashStack.push(new Stash());
			sp = static_cast<Stash*>(stashStack.peek());
			sp->initialize(sizeof(char) * 100);
			i = 0;
			ctr++;
		}

		sp->add(&line);
		i++;
	}

	int k = ctr*5 + i;
	const int length = k;
	string s[k--];

	for(int j = 0; j < ctr; j++){
		for(i; i >=0; i--){
			cout << *(string*)(sp->fetch(i)) << endl;;
		}
		i=4;
		stashStack.pop();
		sp = static_cast<Stash*>(stashStack.peek());
	}

	for(i = 0; i < length; i++){
		cout << s[i] << endl;
	}
}