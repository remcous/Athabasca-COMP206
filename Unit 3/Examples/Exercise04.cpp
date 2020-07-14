// Exercise04.cpp
// Modifies Menu.cpp to use switch statement
#include <iostream>
using namespace std;

int main(){
	char c;	// To hold response
	bool run = true;

	while(run){
		cout << "MAIN MENU:" << endl;
		cout << "l: left, r: right, q: quit -> ";
		cin >> c;

		switch(c){
			case 'q': 
				run = false;
				break;
			case 'l':
				cout << "LEFT MENU:" << endl;
				cout << "select a or b: ";
				cin >> c;
				switch(c){
					case 'a':
						cout << "you chose 'a'" << endl;
						break;
					case 'b':
						cout << "you chose 'b'" << endl;
						break;
					default:
						cout << "you didn't choose a or b!" << endl;
				}
				break;
			case 'r':
				cout << "RIGHT MENU:" << endl;
				cout << "select c or d: ";
				cin >> c;
				switch(c){
					case 'c':
						cout << "you chose 'c'" << endl;
						break;
					case 'd':
						cout << "you chose 'd'" << endl;
						break;
					default:
						cout << "you didn't choose c or d!" << endl;;
				}
				break;
			default:
				cout << "You must type l or r or q!" << endl;
		}
	}
	cout << "quitting menu..." << endl;
}