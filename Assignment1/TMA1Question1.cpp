//: TMA1Question1.cpp

/* 
 Title: TMA1Question1.cpp
 Description: Opens a file and counts white-space separated words in the file
 Date: January 15, 2016
 Author: Remi Coussement
*/

/*
 DOCUMENTATION
 
 Program Purpose:
 	To open a file for reading and then count the number of words seperated by white-space contained in the file

 Compile (assuming mingw compiler and opened command prompt): g++ -o TMA1Question1 TMA1Question1.cpp
 Execution (in a Command Prompt window): TMA1Question1.exe (or just TMA1Question1)
 
 Classes: none

 Variables:
 	words (int) - holds the count of the white-space separated words
 	word (string) - holds the current word from the file
 	in (ifstream) - input file stream object

 Formulae: none	
*/

 /*
 TEST PLAN
 
 Normal case 1 (file containing 5 words) :
	>The file contains: 5 words! 	

 Normal case 2 (empty file) :
 	>The file contains: 0 words!

 Normal case 3 (file containing 5 words on separate lines) :
 	>The file contains: 5 words!

 Bad Data case 1 (file containing 5 words with a space missing):
 	>The file contains: 4 words!

 Bad Data case 2 (file doesn't exist):
 	>Error: File not found!

 Discussion:
 	The program will open a file for reading, if the file doesn't exist it will produce an error message to the console
 	Next a loop will grab each word out of the file, then the counter will increment
 	Finally the program will output a statement to the console to show how many words were contained in the file
 
*/

#include <string>
#include <fstream>
#include <iostream>
using namespace std;

int main(void){
	int words = 0;	//declares the counter variable and initializes it as 0
	string word;	//declares the string to hold the current word
	ifstream in("test.txt");	//ifstream object, opens file for reading

	if(!in.is_open()){	//checks if the file has opened without error, otherwise it will print an error message to the console
		cout << "Error: File not found!" << endl;
	}
	else {
		while(in >> word){	//inputs a single word (white-space serparated) from the file
			words++;		//increments the word counter variable
		}

		//outputs the final word count to the console
		cout << "The file contains: " << words << " words!" << endl;
	}
}