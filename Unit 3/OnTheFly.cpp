// C03: OnTheFly.cpp
// On-the-fly variable definitions
#include <iostream>
using namespace std;
int main(){
	//...
	{	//begin new scope
		int q = 0;	//C requires definition here
		//..
		//Define at point of use:
		for(int i = 0; i < 100; i++){
			q++;	//q comes from a larger scope
			//Definiton at the end of scope
			int p = 12;
		}
		int p = 1;	//a different p
	}	//End scope containing q & outer p
	cout << "Type characters:" << endl;
	while(char c = cin.get() != 'q'){
		cin.ignore();
		cout << c << " wasn't it" << endl;
		if(char x = c =='a' || c == 'b')
			cout << "You typed a or b" << endl;
		else
			cout << "You typed " << x << endl;
	}
	cout << "Type A, B, or C" << endl;
	switch(int i = cin.get()){
		case 'A': cout << "Snap" << endl; break;
		case 'B': cout << "Crackle" << endl; break;
		case 'C': cout << "Pop" << endl; break;
		default: cout << "Not A, B, or C!" << endl;
	}

}