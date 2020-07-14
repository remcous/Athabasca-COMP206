// Exercise08.cpp
// Aggregate initialization of string objects
// input into a Stack object and then printed
#include "Stack3.h"
#include <string>
#include <iostream>
using namespace std;

int main(){
	string s[] = {"Uh, Yeah don't get it twisted",
				"This rap shit, is mine",
				"Motherfucker, it's not, a fuckin, game",
				"Fuck what you heard",
				"It's what you hearing",
				"It's what you hearing",
				"It's what you hearing",
				"X gon' give it to ya"};
	Stack dmx;

	for(int i = 0; i < sizeof(s)/ sizeof(*s); i++){
		dmx.push(new string(s[i]));
	}

	string* sp;

	while((sp = (string*)dmx.pop()) != 0){
		cout << *sp << endl;
		delete sp;
	}
}