// Exercise7-08.cpp
// SuperVar modified to use #ifdef for the enum
#include <iostream>
using namespace std;
#define DEBUG

enum vartype{
	character,
	integer,
	floating_point
};	// Define one

class SuperVar{
	#ifdef DEBUG
	vartype var;
	#endif	// DEBUG

	union{	// Anonymous Union
		char c;
		int i;
		float f;
	};
public:
	SuperVar(char ch);
	SuperVar(int ii);
	SuperVar(float ff);
	void print(vartype v);
};

SuperVar::SuperVar(char ch){
	#ifdef DEBUG
	var = character;
	#endif // DEBUG
	c = ch;
}

SuperVar::SuperVar(int ii){
	#ifdef DEBUG
	var = integer;
	#endif	// DEBUG
	i = ii;
}

SuperVar::SuperVar(float ff){
	#ifdef DEBUG
	var = floating_point;
	#endif	// DEBUG
	f = ff;
}

void SuperVar::print(vartype v){
	#ifdef DEBUG
	v = var;
	#endif	// DEBUG
	switch(v){
		case character:
			cout << "character: " << c << endl;
			break;
		case integer:
			cout << "integer: " << i << endl;
			break;
		case floating_point:
			cout << "float: " << f << endl;
			break;		
	}
}

int main(){
	#ifdef DEBUG
	cout << "Debugger active" << endl;
	#endif	// DEBUG
	SuperVar A('c'), B(12), C(1.44F);
	A.print(character);
	B.print(integer);
	C.print(floating_point);
}