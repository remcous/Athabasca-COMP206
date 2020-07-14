// Stash.h
// Stash using vector
#include <vector>
using namespace std;

struct Stash{
	int size;		// Size of each space
	int next;		// Next empty space
	int quantity;

	vector<unsigned char> storage;

	void initialize(int size);
	int add(const void* element);
	void* fetch(int index);
	int count();
	void inflate(int increase);
	void cleanup();
};