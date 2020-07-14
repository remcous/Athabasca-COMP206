// Hen.cpp

/*
Title: Hen.cpp
Description: Implementation for the Hen, Hen::Nest, and Hen::Nest::Egg classes
Date: March 12, 2016
Author: Remi Coussement
Version 1.0
*/

#include "Hen.h"
#include <iostream>
using namespace std;

// Hen constructor
Hen::Hen(){
	cout << "Hen object created" << endl;
}

// Hen destructor
Hen::~Hen(){
	cout << "Hen object deleted" << endl;
}

// Displays the contents of Hen object
void Hen::display(){
	cout << "Displaying Hen" << endl;
}

// Nest constructor
Hen::Nest::Nest(){
	cout << "Nest object created" << endl;
}

// Nest destructor
Hen::Nest::~Nest(){
	cout << "Nest object deleted" << endl;
}

// Displays the contents of the Nest object
void Hen::Nest::display(){
	cout << "Displaying Nest" << endl;
}

// Egg constructor
Hen::Nest::Egg::Egg(){
	cout << "Egg object created" << endl;
}

// Egg destructor
Hen::Nest::Egg::~Egg(){
	cout << "Egg object deleted" << endl;
}

// Displays the contents of the Egg object
void Hen::Nest::Egg::display(){
	cout << "Displaying Egg" << endl;
}