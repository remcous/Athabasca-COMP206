//: TMA2Question2.cpp

/*
Title: TMA2Question2.cpp
Description: Program using a Hen class with a nested class named Nest which contains a nested class named Egg
Date: March 12, 2016
Author: Remi Coussement
Version 1.0
*/

/*
DOCUMENTATION

Program Purpose:
	Produce objects of nested classes, run a function in them, then delete them to call the destructor

Compile (assuming mingw compiler and opened command prompt):
	g++ -o TMA2Question2 TMA2Question2.cpp Hen.h Hen.cpp
Execution (in a Command Prompt window): TMA2Question2.exe (or just TMA2Question2)

Classes: 
	Hen
	Hen::Nest
	Hen::Nest::Egg

Variables:
	hen (Hen) = an object of type Hen
	nest (Hen::Nest) = an object of type Nest, which is nested inside of the Hen class
	egg (Hen::Nest::Egg) = an object of type Egg, which is nested inside of the Nest class

Formulae: none
*/

/*
TEST PLAN

Normal case 1:
	>Hen object created
	>Nest object created
	>Egg object created
	>Displaying Hen
	>Displaying Nest
	>Displaying Egg
	>Hen object deleted
	>Nest object deleted
	>Egg object deleted

Discussion:
	The program begins by producing an object of type Hen, Hen::Nest, and Hen::Nest::Egg using new, this will call the constructors for each object
	which will print to the console indicating that each object has been created successfully. Each object then has its display member function 
	utilized which will print information to the console, then each object is deleted which will call each objects destructor and output to 
	the console indicating that each object has been deleted
*/

#include "Hen.h"

int main(){
	// Declares one of each of the objects in Hen.h, calls constructor
	Hen* hen = new Hen;
	Hen::Nest* nest = new Hen::Nest;
	Hen::Nest::Egg* egg = new Hen::Nest::Egg;

	// Display function called for each object
	hen->display();
	nest->display();
	egg->display();

	// Deletes the objects to call the destructor
	delete hen;
	delete nest;
	delete egg;
}