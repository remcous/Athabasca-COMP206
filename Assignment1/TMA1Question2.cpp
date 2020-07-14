//: TMA1Question2.cpp

/* 
 Title: TMA1Question2.cpp
 Description: Opens a file and displays one line at a time
 Date: January 16, 2016
 Author: Remi Coussement
*/

/*
 DOCUMENTATION
 
 Program Purpose:
 	To open a file for reading and display one line at a time to the console

 Compile (assuming mingw compiler and opened command prompt): g++ -o TMA1Question2 TMA1Question2.cpp
 Execution (in a Command Prompt window): TMA1Question2.exe (or just TMA1Question2)
 
 Classes: none

 Variables:
 	in (ifstream) - input file stream object
 	line (string) - holds the input line from the file

 Formulae: none	
*/

 /*
 TEST PLAN
 
 Normal case 1 (file containing 3 lines) :
	>Press enter to proceed to the next line of text: <enter>
	>This file is a <enter>
	>multiline test file <enter>
	>for TMA1Question2 <enter>
	>End of file	

 Normal case 2 (empty file) :
 	>Press enter to proceed to the next line of text: <enter>
 	>End of file

 Bad Data case 1 (file containing escape characters, same file as above with \n added after "multiline") :
 	>Press enter to proceed to the next line of text: <enter>
	>This file is a <enter>
	>multiline\n test file <enter>
	>for TMA1Question2 <enter>
	>End of file

 Bad Data case 2 (file doesn't exist):
 	>Error: File not found!

 Discussion:
 	The program will open a file for reading, if the file doesn't exist it will produce an error message to the console
 	Next a loop will grab a line from the file, print it to the console and wait for the user to press a key to continue iterating through the loop
 	When the end of file is reached a message will be printed to the console to indicate the end of file
*/
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

int  main(void){
	ifstream in("test2.txt");
	string line;

	if(!in.is_open())	//checks if the file has opened without error, else prints an error message
	{
		cout << "Error: file not found!" << endl;
	}
	else {
		cout << "press enter to proceed to the next line of text:";
		cin.ignore();	//waits for the user to press enter

		while(getline(in, line)){	//inputs a line of text from the file to the string called line
			cout << line;	//outputs the line getline has grabbed from the file
			cin.ignore();	//waits for the user to press enter
		}

		//prints to the console to inform the user that the end of the file has been reached
		cout << "End of file" << endl;
	}
}