//: TMA1Question3.cpp

/* 
 Title: TMA1Question3.cpp
 Description: Calculates and prints all the prime numbers from 1-10000
 Date: January 16, 2016
 Author: Remi Coussement
*/

 /*
 DOCUMENTATION
 
 Program Purpose:
 	To determine all the prime numbers from 1-10000

 Compile (assuming mingw compiler and opened command prompt): g++ -o TMA1Question3 TMA1Question3.cpp
 Execution (in a Command Prompt window): TMA1Question3.exe (or just TMA1Question3)
 
 Classes: none

 Variables:
 	current (int) - current number being tested
 	i (int) - number being used to test the current number
 	ctr (int) - holds the number of values that the current number is cleanly divisible by

 Formulae: 
	The formula for checking the remainder of the division of two integers is:
 	remainder = current % i
*/

/*
 TEST PLAN
 
 >2
 >3
 >5
 >7
 ...
 >9967
 >9973

 Discussion:
 	The program will iterate through the first for loop for values up to 10000 starting at 2, which will set the ctr=0, then begin a second for loop inside the first
 	which will iterate values from 2 with the loop condition set to i<current such that it will iterate up to current-1 excluding the current value from being tested
 	then an if statement will be used to check if the ctr is still equal to zero, if it is the number is a prime and should be printed to the console
*/
#include <iostream>
using namespace std;

int main(void){
	int ctr;

	//for loop iterates the values to check if they are a prime number
	//starts at 2 as the definition of a prime number indicates that a prime is a number greater than one which has no factors other than 1 and itself
	for(int current = 2; current <= 10000; current++){	
		ctr=0;	//sets the counter variable at 0

		for(int i=2; i<current; i++){	//iterates between 2 and the current value -1 to check if it is a factor of the current number
			if(current%i == 0){	//if the remainder of the division of the current value and value i is 0, then i is a factor of current
				ctr++;	//increments the counter to indicate the number of factors current has
			}
		}

		if(ctr == 0){	//if the counter is equal to zero after the loop then the current number is a prime number
			cout << current << endl;;
		}
	}

	cout << endl;
}