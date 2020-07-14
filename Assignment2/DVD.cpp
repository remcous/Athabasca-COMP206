// DVD.cpp

/*
Title: DVD.cpp
Description: Implementation for the DVD class
Date: March 12, 2016
Author: Remi Coussement
Version 1.0
*/

#include "DVD.h"
#include <iostream>
#include <string>
using namespace std;

// sets the values for the data stored in the DVD object from the arguments
DVD::DVD(string t, int y, string s1, string s2, string d, string g){
	title = t;
	year = y;
	starring[0] = s1;
	starring[1] = s2;
	director = d;
	genre = g;
}

// Prints the data to the console
void DVD::print(){
	cout << "Title: " << title << endl
		<< "Year: " << year << endl
		<< "Starring: " << starring[0] 
		<< " & " << starring[1] << endl
		<< "Director: " << director << endl
		<< "Genre: " << genre << endl << endl;
}