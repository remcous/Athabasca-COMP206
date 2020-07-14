// StackOfInt.h

class StackOfInt{
	class StackImp;
	StackImp* storage;
public:
	void initialize();
	void add(int);
	int* fetch(int);
	int count();
	void cleanup();
};