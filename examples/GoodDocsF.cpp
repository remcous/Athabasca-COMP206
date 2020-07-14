//: GoodDocs.cpp

/* 
 Title: GoodDocsF.cpp
 Description: Temperature Conversion Program
 Date: December 8, 2013
 Author: Richard S. Huntrods
 Version: 1.0
 Copyright: 2013 Richard S. Huntrods
*/

/*
 DOCUMENTATION
 
 Program Purpose:
 	Demonstrate proper format for documentation, test plans and comments.
 	Also demonstrate user prompts, keyboard input, simple calculations and output,
 	specifically converting temperatures from F to C.

 Compile (assuming mingw compiler and opened command prompt): g++ -o GoodDocsF GoodDocsF.cpp
 Execution (in a Command Prompt window): GoodDocsF.exe (or just GoodDocsF)
 
 Classes: none

 Variables:
 	input_units (char) = C or F to designate temperature units for the supplied input temperature.
 	output_units (char) = C or F to designate temperature units desired for the output conversion,
 	input_temp (float) = real (decimal) number supplied by user which is the input temperature.
 	output_temp (float) = calculated output temperature in output_units as a real (decimal) number.

 Formulae:
 	The formula for converting temperatures from Fahrenheit to Celcius is:
 	T(C) = (T(F) - 32.0) * 5.0 / 9.0;
 	The formula for converting temperatures from Celcius to Fahrenheit is:
 	T(F) = (T(C) * 9.0 / 5.0) + 32.0

 	It is important to use decimal numbers especially in the division to avoid integer devision.
 	It is also important use use the parenthesis to enforce calculation order.
*/

/*
 TEST PLAN
 
 Normal case 1:
 	>What is the input temperature? 32
 	>What are the units of the input temperature (C for Celcius or F for Fahrenheit)? F
 	>Your input temperature is 32F which is 0C.

 Normal case 2:
 	>What is the input temperature? 100
 	>What are the units of the input temperature (C for Celcius or F for Fahrenheit)? C
 	>Your input temperature is 100C which is 212F.

 Bad Data case 1 (temperature out of range):
 	>What is the input temperature? -4000
 	>What are the units of the input temperature (C for Celcius or F for Fahrenheit)? C
 	>Your input temperature is -4000C which is out of range (less than -273.15C or -416F)..

 Bad Data case 2 (incorrect units):
 	>What is the input temperature? -40
 	>What are the units of the input temperature (C for Celcius or F for Fahrenheit)? Q
 	>The units you have specified are not one of C (Celcius) or F (Fahrenheit).

 Discussion:
 	The program accepts any integer or decimal input temperature and a unit character which must be either C, c, F or f.
 	The program then prints the input temperature as well as the temperature converted into the non-input units.
 	Temperature range is from -273C (-415F) to any positive number.
 
*/

#include <iostream> // Stream declarations
using namespace std;

int main(void) {
	char input_units, output_units;
	float input_temp, output_temp;
	int error = 0;

	// request and obtain name
	cout << "What is the input temperature? ";
	cin >> input_temp;

	// request and obtain age
	cout << "What are the units of the input temperature (C for Celcius or F for Fahrenheit)? ";
	cin >> input_units;

	// convert input units to upper case
	input_units = toupper(input_units);

	// check input_units for acceptable response; perform appropriate conversion if acceptable and print error message if not
	if(input_units == 'C') {
		// display input
		cout << "Your input temperature is " << input_temp << input_units;

		// range check input_temp
		if(input_temp < -273) {
			// disply out of range error message
			cout << " which is out of range (less than -273C or -416F)." << endl;
		}
		else {
			// convert from Celcius to Fahrenheit
			output_units = 'F';
			output_temp = (input_temp * 9.0) / 5.0 + 32.0;

			// display converted output
			cout << " which is " << output_temp << output_units << "." << endl;
		}
	}
	else if(input_units == 'F') {
		// display input
		cout << "Your input temperature is " << input_temp << input_units;

		// range check input_temp
		if(input_temp < -416) {
			// out of range
			cout << " which is out of range (less than -273C or -416F)." << endl;
		}
		else {
			// convert from Fahrenheit to Celcius
			output_units = 'C';
			output_temp = (input_temp - 32.0) * 5.0 / 9.0;

			// display converted output
			cout << " which is " << output_temp << output_units << "." << endl;
		}
	}
	else {
		// display input_unit error message
 		cout << "The units you have specified are not one of C (Celcius) or F (Fahrenheit)" << endl;
	}
} ///:~
