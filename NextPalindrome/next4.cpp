#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <queue>
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

queue<string> readValues(int n) {
	queue<string> values;
	for(int i = 0; i < n; i++) {
		string text;
		getline (cin,text);
		// text = removeInitialZeros(text);
		values.push(text);
	}
	return values;
}

void doCalculations(queue<string>& values) {
	while(!values.empty()) {
		string value = values.front();
		cout << getNextPalindrome(value) << endl;
		values.pop();
	}
}

int main() {

	string input = "";

	getline(cin, input);
	stringstream myStream(input);
	
	int n = 0;
	myStream >> n;
	queue<string> values = readValues(n);
	doCalculations(values);

	return 0;
}