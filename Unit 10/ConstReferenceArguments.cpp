// C11: ConstReferenceArguments.cpp
// Passing references as ConstReferenceArguments
void f(int&){}
void g(const int&){}

int main(){
	//!	f(1);	// Error
	g(1);
}