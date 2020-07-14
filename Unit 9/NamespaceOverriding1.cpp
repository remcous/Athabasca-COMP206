// C10: NamespaceOverriding1.cpp
#include "NamespaceMath.h"
int main(){
	using namespace Math;
	Integer a;	// Hides Math::a;
	a.setSign(negative);
	// Now scope resolution is ncessary
	// to select Math::a :
	Math::a.setSign(positive);
}