// Example2.cpp
// Prints the area of a circle given the radius
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double radius, area;

	cout << "Enter the radius of a circle: ";
	cin >> radius;

	cout << "The area is " << radius * radius * M_PI << " units!\n";
}