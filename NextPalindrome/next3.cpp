#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

// test case: 94187978322
// answer: 94188088149

string add1ToValue(string value) {
	if(value.back() != '9') {
		*value.rbegin() = value.back() + 1;
		return value;
	}

	for (string::reverse_iterator rit=value.rbegin(); rit != value.rend(); ++rit) {
		if(*rit != '9') {
			*rit += 1;
			return value;
		}
		*rit = '0';
	}

	value.insert(0, "1");

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
	while(text.front() == '0')
		text.erase(0,1);
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

	getline(cin, input);
	stringstream myStream(input);
	
	int n = 0;
	myStream >> n;
	vector<string> values = readValues(n);
	
	for(int i = 0; i < values.size(); i++) {
		cout << getNextPalindrome(values[i]) << endl;	
	}
	return 0;
}