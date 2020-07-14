//Mirror.cpp
#include <iostream>
#include "Mirror.h"
using namespace std;

int main(){
	Mirror m1;
	Mirror m2(&m1);

	cout << m1.test() << " " 
		<< m2.test() << endl;
}