// C03: Global2.cpp {O}
// Accessing external global variables
extern int globe;
//	(the linker resolves the reference)
void func(){
	globe = 47;
}