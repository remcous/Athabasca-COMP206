// link5.cpp
#include <iostream>
#include "Mirror.h"
using namespace std;

extern Mirror mirror4;
Mirror mirror5(&mirror4);

int main(){
	cout << mirror5.test() << endl;
}