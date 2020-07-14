// C03: Assert.cpp
// Use of the assert() debugging macro

// define NDEBUG after debugging is complete
// to prevent assert() flags
//#define NDEBUG ;
#include <cassert>	// Contains the macro
using namespace std;

int main(){
	int i = 100;
	assert(i != 100);	// Fails
}