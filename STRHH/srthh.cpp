#import <iostream>
#import <string>
#import <vector>
#include <sstream>
using namespace std;

vector<string> readInputs(int nInputs) {
	vector<string> set;
	for(int i = 0; i < nInputs; i++) {
		string text;
		getline (cin,text);
		set.push_back(text);	
	}
	return set;
}

string getPrintableString(string input) {
	int size = input.length();
	if(size == 1 || size == 0) return input;

	int halfSize = size/2;

	string halfString = input.substr(0, halfSize);

	string result;
	result += halfString[0];

	int i = 2;
	while(i < halfString.length()) {
		result+=halfString[i];
		i+=2;
	}
	return result;
}

void printHalves(vector<string> inputs) {
	for(int i = 0; i < inputs.size(); i++) {
		string input = inputs[i];
		cout << getPrintableString(input) << endl;
	}
}

int main() {

	string input = "";
	int nInputs = 0;

	getline(cin, input);
	stringstream myStream(input);

	if(!(myStream >> nInputs)) {
		cout << "Invalid number!";
		return 1;
	}

	vector<string> set = readInputs(nInputs);

	printHalves(set);

	return 0;
}