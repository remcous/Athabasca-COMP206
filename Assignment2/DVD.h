// DVD.h

/*
Title: DVD.h
Description: DVD class declaration
Date: March 12, 2016
Author: Remi Coussement
Version 1.0
*/

#ifndef DVD_H
#define DVD_H
#include <string>
using namespace std;

class DVD{
	string title, director, genre, starring[2];
	int year;
public:
	DVD(string, int, string, string, string, string);
	void print();	// prints the data to the console
};
#endif //	DVD_H