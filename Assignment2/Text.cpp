// Text.cpp

/*
Title: Text.cpp
Description: Implementation for the text class
Date: March 12, 2016
Author: Remi Coussement
Version 1.0
*/

#include "Text.h"
#include <fstream>
#include <string>
#include <cassert>
using namespace std;

// Text constructor
Text::Text(){
	data = "";
}

// Text constructor with string argument
Text::Text(string filename){
	// File input object set to open filename
	ifstream in(filename.c_str());
	assert(in);	// ensures that the file exists and opens properly

	// Ensure the data is blank before appending to it
	data = "";
	string s;

	// Iterate until the end of file
	while(getline(in, s) != 0)
		data += (s + '\n');	// add the current line and an endline character to the string data

	// closes file
	in.close();
}

// Returns the contents of the string data member object
string Text::contents(){
	return data;
}