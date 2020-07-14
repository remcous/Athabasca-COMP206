// Example6.cpp
// Copy an entire file into a vector of string
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main(){
	vector<string> v;
	ifstream in("Example6.cpp");
	string line, text;

	while(getline(in, line)){
		v.push_back(line);	//Add the line to the end
	}

	for(int i = 0; i< v.size(); i++){
		text += (v[i] + "\n");
	}

	cout << text << endl;
}