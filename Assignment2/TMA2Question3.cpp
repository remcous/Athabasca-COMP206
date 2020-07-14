//: TMA2Question3.cpp

/*
Title: TMA2Question3.cpp
Description: Program to use the Text class to read the contents of a file and
			store it in a string which can be returned by a member function of Text
Date: March 12, 2016
Author: Remi Coussement
Version 1.0
*/

/*
DOCUMENTATION

Program Purpose:
	To use the Text class to read data from a file and then using a member function
	of Text to be able to print the file contents to the console

Compile (assuming mingw compiler and opened command prompt):
	g++ -o TMA2Question3 TMA2Question3.cpp Text.h Text.cpp
Execution (in a Command Prompt window): TMA2Question3.exe (or just TMA3Question1)

Classes: 
	Text

Variables: none

Formulae: none
*/

/*
TEST PLAN

Normal case 1:
	>//: TMA2Question3.cpp
	>
	>/*
	>Title: TMA2Question3.cpp
	>...
	>int main(){
	>...
	>}

Bad Data case 1 (file not found):
	>Assertion failed: ...

Discussion:
	The program will call the overloaded constructor of the class Text which takes a string
	argument, the string argument will be used as a filename for an input file from which it
	will input the contents as a string. This string is output to the console by calling
	the Text::contents() function in cout.
*/

#include "Text.h"
#include <iostream>
using namespace std;

int main(){
	// Create a Text object to hold the contents of TMA2Question3.cpp
	Text text("TMA2Question3.cpp");

	// Output the contents of the Text object to the console
	cout << text.contents() << endl;
}