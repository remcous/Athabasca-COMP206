// Exercise12-8.cpp
#include <iostream>
using namespace std;

class Simple{
	int i;
public:
	Simple(int ii = 0):i(ii){}
	
	friend const Simple&
	operator+(const Simple& a);

	friend const Simple& operator++(Simple& a);
	friend const Simple operator++(Simple& a, int);
	friend const Simple& operator--(Simple& a);
	friend const Simple operator--(Simple& a, int);

	/*
	void print(ostream& os) const{
		os << "i = " << i << endl;
	}
	*/

	friend ostream& operator<<(ostream& os, 
		const Simple& s);

	friend const Simple&
	operator-(const Simple& a);
};

const Simple& operator+(const Simple& a){
	cout << "+Simple\n";
	return a;
}

const Simple& operator++(Simple& a){ // Prefix
	cout << "++Simple\n";
	a.i++;
	return a;
}
const Simple operator++(Simple& a, int){	// Postfix
	cout << "Simple++\n";
	Simple before(a.i);
	a.i++;
	return before;
}
const Simple& operator--(Simple& a){ // Prefix
	cout << "--Simple\n";
	a.i--;
	return a;
}
const Simple operator--(Simple& a, int){	// Postfix
	cout << "Simple--\n";
	Simple before(a.i);
	a.i--;
	return before;
}

ostream& operator<<(ostream& os,
	const Simple& s){
	os << "Simple i = " << s.i << endl;
}

const Simple& operator-(const Simple& a){
	cout << "-Simple\n";
	return a;
}

int main(){
	Simple s(1);

	/*
	s.print(cout);
	(++s).print(cout);
	(s++).print(cout);
	(--s).print(cout);
	(s--).print(cout);
	s.print(cout);
	*/

	cout << +s;
	cout << s++;
	cout << ++s;
	cout << s--;
	cout << --s;
	cout << -s << endl;
}
