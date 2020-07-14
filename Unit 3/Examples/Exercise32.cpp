// Exercise32.cpp
// Defines a function which takes a double
// and returns an int
#include <iostream>

int truncate(double d){
	return static_cast<int>(d);
}

int main(){
	int (*fx)(double) = truncate;

	std::cout << "fx(3.14159) = " << fx(3.14159) << std::endl;
}