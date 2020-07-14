// C03: PointerIncrement2.cpp
#include <iostream>
using namespace std;

typedef struct{
	char c;
	short s;
	int i;
	long l;
	float f;
	double d;
	long double ld;
} Primatives;

int main(){
	Primatives p[10];
	Primatives* pp = p;

	cout << "sizeof(Primatives) = "
		<< sizeof(Primatives) << endl;
	cout << "pp = " << (long)pp << endl;
	pp++;
	cout << "pp = " << (long)pp << endl;
}