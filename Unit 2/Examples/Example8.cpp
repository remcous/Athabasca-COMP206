// Example8.cpp
// Places 25 floating point numbers into a
//vector and prints them to the console
#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<float> num;

	for(int i=0; i<25; i++){
		num.push_back(i*2.353);
	}

	for(int i=0; i<num.size(); i++){
		cout << dec << num[i] << endl;
	}
}