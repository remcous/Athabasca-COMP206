// C10: UsingDeclaration1.cpp
#include "UsingDeclaration.h"
void h(){
	using namespace U;	// using directive
	using V::f;	// Using declaration
	f();	// call V::f();
	U::f();	// must fully qualify to call
}
int main(){}