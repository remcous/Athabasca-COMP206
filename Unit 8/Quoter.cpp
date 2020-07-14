// C08: Quoter.cpp
// Random quote selection
#include <iostream>
#include <cstdlib>	// Random Number Generator
#include <ctime>	// To seed RNG
using namespace std;

class Quoter{
	int lastquote;
public:
	Quoter();
	int lastQuote() const;
	const char* quote();
};

Quoter::Quoter(){
	lastquote = -1;
	srand(time(0));	// Seed RNG
}

int Quoter::lastQuote() const{
	return lastquote;
}

const char* Quoter::quote(){
	static const char* quotes[] = {
		"Are we having fun yet?",
		"Doctors alwats know best",
		"Is it ... Atomic?",
		"Fear is obscene",
		"There is no scientific evidence "
		"to support the idea "
		"that life is serious",
		"Things that make us happy, make us wise"
	};
	const int qsize = sizeof quotes/sizeof *quotes;
	int qnum = rand() % qsize;
	while(lastquote >= 0 && qnum == lastquote)
		qnum = rand() % qsize;
	return quotes[lastquote = qnum];
}

int main(){
	Quoter q;
	const Quoter cq;
	cq.lastQuote();	// OK
	//! cq.quote();	// Not OK; non const function

	for(int i = 0; i < 20; i++)
		cout << q.quote() << endl;
}