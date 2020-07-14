// Exercise12.cpp
#include "Hen.h"
#include "Stack.h"

int main(){
	Stack henStack;
	henStack.initialize();

	for(int i = 0; i < 10; i++){
		henStack.push(new Hen);
	}

	Hen* hp;

	while((hp = (Hen*)henStack.pop()) != 0){
		hp->print();
		delete hp;
	}

	henStack.cleanup();
}