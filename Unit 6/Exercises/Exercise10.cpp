// Exercise10.cpp
// Test a program with no constructors
// Then add a constructor with an argument

class X{
	int i;
public:
	X(int ii);
};

X::X(int ii){
	i = ii;
}

int main(){
	X x;	
	// won't compile, as a constructor has been
	// defined there is no automatic default
	// constructor, and therefore the argument is 
	// required to produce an object of type X
}