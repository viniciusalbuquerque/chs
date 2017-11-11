#include <iostream>
#include <queue>
#include <string>
#include <sstream>
using namespace std;


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

bool odd(string& value) {
	return value.size()%2 != 0;
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

string mirror(string& value) {
	string::iterator fow = value.begin();
	string::iterator back = --value.end();

	while(fow < back) {
		*back = *fow;
		++fow;
		--back;
	}
	return value;
}

string getPalindrome(string& strValue) {
	if(isPalindrome(strValue)) {
		string::iterator it = strValue.begin() + strValue.size()/2;
		if(odd(strValue)) {
			if(*it != '9') {
				*it = *it + 1;
				return strValue;
			} else {
				*it = '0';
				--it;
				while(it != strValue.begin()) {
					if(*it != '9') {
						*it = *it + 1;
						break;
					}
					*it = '0';	
					--it;
				}

				if(strValue.front() == '0') {
					strValue.insert(0, "1");
				}
				
				strValue = mirror(strValue);
				
			}
		} else {
			string::iterator it2 = strValue.begin() + strValue.size()/2 + 1;
			if(*it != '9') {
				*it = *it + 1;
				*it2 = *it;
			} else {
				*it = '0';
				--it;
				while(it != strValue.begin()) {
					if(*it != '9') {
						*it = *it + 1;
						break;
					}
					*it = '0';	
					--it;
				}

				if(strValue.front() == '0') {
					strValue.insert(0, "1");
				}
				
				strValue = mirror(strValue);
			}
		}
	} else {
		string::iterator it = strValue.begin() + strValue.size()/2;
		string::iterator fow = value.begin() + v;
		string::iterator back = --value.end();
	}
	return strValue;
}

bool isBorder(string& value) {
	for(string::reverse_iterator rit = value.rbegin(); rit != value.rend(); ++rit) {
		if(*rit != '9') return false;
	}
	return true;
}

string getNextPalindrome(string& value) {
	if(isBorder(value)) {
		string tmp (value.size(), '0');
		value = tmp;
		value.insert(0, "1");
	} else {
		
	}
	value = getPalindrome(value);
	return value;
}

queue<string> readValues(int n) {
	queue<string> values;
	for(int i = 0; i < n; i++) {
		string text;
		getline (cin,text);
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