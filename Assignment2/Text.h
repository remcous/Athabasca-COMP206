// Text.h

/*
Title: Text.h
Description: Text class declaration
Date: March 12, 2016
Author: Remi Coussement
Version 1.0
*/

#ifndef TEXT_H
#define TEXT_H
#include <string>
using namespace std;

class Text{
	string data;
public:
	Text();
	Text(string filename);
	string contents();	// Displays the contents of the Text object
};
#endif //	TEXT_H