//: TMA2Question1.cpp

/*
Title: TMA2Question1.cpp
Description: Program to test a DVD class
			for a DVD rental company to use
Date: March 12, 2016
Author: Remi Coussement
Version 1.0
*/

/*
DOCUMENTATION

Program Purpose:
	Open a file, input the relevent data for 10 movies
	then places this information into a DVD class made to hold the data
	and use a print function to output the data to the console

Compile (assuming mingw compiler and opened command prompt):
	g++ -o TMA2Question1 TMA2Question1.cpp DVD.h DVD.cpp
Execution (in a Command Prompt window): TMA2Question1.exe (or just TMA2Question1)

Classes: 
	DVD

Variables:
	in (ifstream) = file input object to get data from the list of DVDs
	title (string) = Holds the title of the dvd
	year (int) = Holds the value for the year of release for the movie
	starring[2] (string) = array to hold the names of 2 of the films stars
	director (string) = Holds the name of the director of the movie
	genre (string) = Holds the genre(s) of the movie
	library[10] (DVD) = Array of DVD objects to hold information about 10 movies

Formulae: none
*/

/*
TEST PLAN

Normal case 1 (file with 10 DVDs in proper format):
	>Title: Star Wars: A New Hope
	>Year: 1977
	>Starring: HAMILL,Mark & FORD,Harrison
	>Director: LUCAS, George
	>Genre: Sci-Fi
	>...
	>Genre: Comedy

Bad Data case 1 (file not found):
	>Assertion failed: (in),function main, file TMA2Question1.cpp, line 90.
	>Abort trap: 6

Bad Data case 2 (empty file):
	>Title:
	>Year: 0
	>Starring:  & 
	>Director: 
	>Genre: 
	>...
	>Genre: 

Bad Data case 3 (file missing last DVD):
	>Title: Star Wars: A New Hope
	>...
	>Title: 
	>Year: 0
	>Starring:  & 
	>Director: 
	>Genre: 

Discussion:
	The program opens a file to read a list of DVDs with each field seperated by a ';'
	If the file doesn't exist it will fail the assert(in), in a for loop use getline to input data into
	string and int arrays respectively, after the loop the Data will be input into an array of DVD objects
	utilizing the constructor, finally in a for loop each DVD object in the array will call its print function
*/

#include "DVD.h"
#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <cassert>
using namespace std;

int main(){
	ifstream in("DVD_List.txt");	// file input object
	assert(in);						// checks that the file exists and has opened properly
	string title[10], starring[10][2], director[10], genre[10],y;
	int year[10];

	// inputs the data for the DVD array
	for(int i = 0; i < 10; i++){
		getline(in,title[i],';');
		getline(in,y,';');
		year[i] = atoi(y.c_str());
		getline(in,starring[i][0],';');
		getline(in,starring[i][1],';');
		getline(in,director[i],';');
		getline(in,genre[i],';');
	}

	// closes file
	in.close();

	// Uses the data to declare an array of 10 DVD objects
	DVD library[] = {DVD(title[0],year[0],starring[0][0],starring[0][1],director[0],genre[0]),
					DVD(title[1],year[1],starring[1][0],starring[1][1],director[1],genre[1]),
					DVD(title[2],year[2],starring[2][0],starring[2][1],director[2],genre[2]),
					DVD(title[3],year[3],starring[3][0],starring[3][1],director[3],genre[3]),
					DVD(title[4],year[4],starring[4][0],starring[4][1],director[4],genre[4]),
					DVD(title[5],year[5],starring[5][0],starring[5][1],director[5],genre[5]),
					DVD(title[6],year[6],starring[6][0],starring[6][1],director[6],genre[6]),
					DVD(title[7],year[7],starring[7][0],starring[7][1],director[7],genre[7]),
					DVD(title[8],year[8],starring[8][0],starring[8][1],director[8],genre[8]),
					DVD(title[9],year[9],starring[9][0],starring[9][1],director[9],genre[9]),
	};

	// Calls the print function for the DVD objects to output the data stored in the objects to the console
	for(int i = 0; i < 10; i++)
		library[i].print();
}