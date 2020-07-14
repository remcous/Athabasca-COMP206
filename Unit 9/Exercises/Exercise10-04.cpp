// Exercise10-04.cpp
// Class Monitor tracks incident() calls
// function error() will call incident() and
// print()
#include <iostream>
using namespace std;

class Monitor{
	int incidentCtr;
public:
	Monitor():incidentCtr(0){}
	~Monitor(){}
	void incident();
	void print();
};

void Monitor::incident(){
	incidentCtr++;
}

void Monitor::print(){
	cout << "There has been " << incidentCtr 
		<< " Total incidents!" << endl;
}

void error(){
	static Monitor incidentReport;
	incidentReport.incident();
	incidentReport.print();
}

int main(){
	for(int i = 0; i < 10; i++)
		error();
}