#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

// test case: 94187978322
// answer: 94188088149

string add1ToValue(string& value) {
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

bool isPalindrome(string& strValue) {
	string::iterator fow = strValue.begin();
	string::iterator back = --strValue.end();

	while(fow < back) {
		if(*fow != *back) return false;	
		++fow;
		--back;
	}
	return true;
}

string getNextPalindrome(string& value) {
	bool isPal = false;
	string strValue = value;
	while(!isPal) {
		strValue = add1ToValue(strValue);	
		isPal = isPalindrome(strValue);
	}
	return strValue;
}

// string getNextPalindrome(string value) {
// 	string strValue = add1ToValue(value);
// 	string strValue2 = strValue;
// 	reverse(strValue.begin(), strValue.end());
// 	if(strValue.compare(strValue2) == 0) {
// 		return strValue2;
// 	}
// 	return getNextPalindrome(strValue2);
// }

string doPalindromeSearch(string& value) {
	bool isPal = false;
	while(!isPal) {
		string valueAdded = add1ToValue(value);
		string strValue2 = valueAdded;
		reverse(valueAdded.begin(), valueAdded.end());
		if(valueAdded.compare(strValue2) == 0) {
			isPal = true;
		}
		value = strValue2;
	}
	return value;
}

string removeInitialZeros(string& text) {
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

void doCalculations(vector<string>& values) {
	int size = values.size();
	for(int i = 0; i != size; i++) {
		cout << getNextPalindrome(values[i]) << endl;
	}
}

int main() {

	string input = "";

	getline(cin, input);
	stringstream myStream(input);
	
	int n = 0;
	myStream >> n;
	vector<string> values = readValues(n);
	doCalculations(values);

	return 0;
}