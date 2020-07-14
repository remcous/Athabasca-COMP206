// C03: ComplicatedDefinitions.cpp

/* 1. */	void * (*(*fp1)(int))[10];
/* 2. */	float (*(*fp2)(int,int,float));
/* 3. */	typedef double (*(*(*fp3)())[10])();
/* 4. */	int (*(*f4())[10])();

int main(){}