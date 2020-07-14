//: TMA1Question4.cpp

/* 
 Title: TMA1Question4.cpp
 Description: Input 100 line from a file into a string array and prints them to the console
 Date: January 16, 2016
 Author: Remi Coussement
*/

 /*
 DOCUMENTATION
 
 Program Purpose:
 	To input lines from a file into a string array, then print the lines from the array to the console

 Compile (assuming mingw compiler and opened command prompt): g++ -o TMA1Question4 TMA1Question4.cpp
 Execution (in a Command Prompt window): TMA1Question4.exe (or just TMA1Question4)
 
 Classes: none

 Variables:
 	in (ifstream) - input file stream object
 	line[100] (string) - holds the lines from the file

 Formulae: none
*/

/*
 TEST PLAN

 Normal case 1:
 	>line 1: Source: Hamlet By William Shakespeare
	>line 2: FRANCISCO at his post. Enter to him BERNARDO]
	>line 3: BERNARDO	Who's there?
	...
	>line 100: Whose image even but now appear'd to us,

 Bad Data case 1 (file with less than 100 lines):
	>line 1: Source: Hamlet By William Shakespeare
	>line 2: FRANCISCO at his post. Enter to him BERNARDO]
	>line 3: BERNARDO	Who's there?
	...
	>line 30: BERNARDO	Welcome, Horatio: welcome, good Marcellus.
	>line 31: 
	...
	>line 100: 

 Bad Data case 2 (File doesn't exist):
	>Error: File not found

 Discussion:
 	The program will enter a for loop iterating values from 0-99 which will represent the array index, the getline function will be used with the ifstream object to input -
 	a line from the file into the string array. When all 100 lines are in the array a second for loop will begin iterating 0-99 and print:
 	line <line_number>: <line[line_number]>
*/
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

int main(void){
	ifstream in("test4.txt");
	string line[100];

	if(!in.is_open()){	//checks if the file is open, and therefore exists
		cout << "Error: File not found" << endl;
	}
	else {
		for(int i=0; i<100; i++){
			getline(in, line[i]);	//inputs a line from the file and stores it in the string array
		}

		for(int i=0; i<100; i++){
			cout << "line " << i+1 << ": " << line[i] << endl;	//outputs the line number followed by the lines stored in the array
		}
	}

	cout << endl;
}