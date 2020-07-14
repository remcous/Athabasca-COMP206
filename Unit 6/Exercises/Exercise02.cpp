// Exercise02.cpp
// Simple class to show constructor & destructor
#include <iostream>
using namespace std;

class Simple{
public:
	Simple();
	~Simple();
};

Simple::Simple(){
	cout << "Simple constructor called!" << endl;
}

Simple::~Simple(){
	cout << "Simple destructor called!" << endl;
}

int main(){
	Simple s;
}