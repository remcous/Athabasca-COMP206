// Example4.cpp
// counts the occurences of a word in a file
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

int main(){
	string word;
	int ctr = 0;
	ifstream in("read.txt");

	while(in >> word){
		for(int i=0; i< word.length();i++)
			word[i] = tolower(word[i]);
		if(word == "the")
			ctr++;
	}

	cout << "The word \"the\" occurs " 
		<< ctr << " times in the file!\n";
}