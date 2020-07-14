// C03: const_cast.cpp
int main(){
	const int i = 0;
	int* j = (int*)&i;	// Deprecated form
	j = const_cast<int*>(&i);	// Preferred form
	// Can't do simultaneous additional casts
	//! long* l = const_cast<long*>(&i);	// Error
	volatile int k = 0;
	int* u = const_cast<int*>(&k);
}