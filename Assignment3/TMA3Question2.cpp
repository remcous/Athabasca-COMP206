//: TMA3Question2.cpp

/* 
 Title: TMA3Question2.cpp
 Description: Find the time elapsed in multiplying 2 arrays of 10000 doubles (using inlines)
 Date: May 29, 2016
 Author: Remi Coussement
*/

/*
 DOCUMENTATION
 
 Program Purpose:
 	Find the time it takes to declare, initialize, and multiply two arrays of 10000 doubles
 	when using an inline functions

 Compile (assuming mingw compiler and opened command prompt): g++ -o TMA3Question2 TMA3Question2.cpp
 Execution (in a Command Prompt window): TMA3Question2.exe
 
 Classes: none

 Variables:
 	Start(const clock_t) = Stores the value for the starting time of the program
 	d1(double[10000]) = stores the values 100-10099 to be multiplied
 	d2(double[10000]) = stores the values 10099-100 to be multiplied
*/

/*
 TEST PLAN
 
 Normal case:
 	>100 * 10099 = 1009900
 	>101 * 10098 = 1019898
 	>...
 	>10098 * 101 = 1019898
 	>10099 * 100 = 1009900
 	>Total Runtime: 0.028498 sec
 
 Discussion:
 	The program stores the value from clock() in a const clock_t object to record the starting time
 	A call is made to the inline function multiply where two double arrays with 10000 storage locations
 	each are declared, then initialized such that the first will hold values 100 to 10099 increasing by 1 with
 	increasing index, and the second will hold 10099 to 100 decreasing by 1 with increasing index
 	A for loop will iterate through the two loops multiplying the values for each index in the two arrays
 	and the result will be printed to the console. When the function scope is completed the total runtime will
 	be calculated by comparing the current time to the starting time stored at the beginning of the program
 	and this result will be printed to the consoles
  	Average of 5 trials = 0.0276694 sec
  	Compared to the non-inline average of 0.029489 sec this means there is a reduction in average run time by
  	0.0018196 sec or a 6.17% increase in efficiency with regards to time taken, these values will differ by system
  	and even on the same system due to factors including other cpu usage at the run time.
 
*/

#include <iostream>
#include <ctime>
using namespace std;

void inline multiply(){
	double d1[10000], d2[10000];

	for(int i = 0; i < 10000; i++)
		d1[i] = i+100;

	for(int i = 0; i < 10000; i++)
		d2[i] = 10099 - i;

	for(int i = 0; i<10000; i++)
		cout << d1[i] << " * " << d2[i] 
			<< " = " << d1[i] * d2[i] << endl;
}

int main(){
	const clock_t Start = clock();

	multiply();
	
	cout << endl << "Total Runtime: "
		<< (double)(clock() - Start)/ CLOCKS_PER_SEC 
		<< " sec" << endl;
}