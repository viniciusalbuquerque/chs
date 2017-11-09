#import <iostream>
#import <string>
#import <vector>
#import <algorithm>
#include <sstream>
using namespace std;

string add1ToValue(string value) {
	int size = value.length();
	if(size == 0) return value;
	if(value[size - 1] == '9') {
		for(int i = size - 1; i >= 0; i--) {
			if(value[i] == '9') {
				value[i] = '0';
				if(i == 0) {
					value.insert(0, "1");
				}
			} else {
				value[i] += 1;
				break;
			}
		}
	} else {
		value[size - 1] += 1;
	}
	return value;
}

string getNextPalindrome(string value) {
	string strValue = add1ToValue(value);
	string strValue2 = strValue;
	reverse(strValue.begin(), strValue.end());
	if(strValue.compare(strValue2) != 0) {
		return getNextPalindrome(strValue2);
	}
	return strValue2;
}

string removeInitialZeros(string text) {
	if(text.length() == 0 || text.length() == 1)
		return text;
	while(text[0] == '0') {
		text.erase(0,1);
	}
	return text;
}

vector<string> readValues(int n) {
	vector<string> values;
	for(int i = 0; i < n; i++) {
		string text;
		getline (cin,text);

		text = removeInitialZeros(text);

		values.push_back(text);
	}
	return values;
}

int main() {

	string input = "";
	int nInputs = 0;

	getline(cin, input);
	stringstream myStream(input);
	
	int n;
	myStream >> n;
	vector<string> values = readValues(n);
	
	for(int i = 0; i < values.size(); i++) {
		cout << getNextPalindrome(values[i]) << endl;	
	}
	return 0;
}