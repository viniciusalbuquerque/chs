#import <iostream>
#import <string>
#import <vector>
#import <algorithm>
using namespace std;

int getNextPalindrome(int value) {
	string strValue = to_string(value);
	string strValue2 = strValue;
	reverse(strValue.begin(), strValue.end());
	if(strValue.compare(strValue2) != 0)
		return getNextPalindrome(value + 1);
	return value;
}

vector<int> readValues(int n) {
	vector<int> values;
	for(int i = 0; i < n; i++) {
		int value;
		cin >> value;
		values.push_back(value);
	}
	return values;
}

int main() {

	int n;
	cin >> n;
	vector<int> values = readValues(n);
	
	for(int i = 0; i < values.size(); i++) {
		cout << getNextPalindrome(values[i] + 1) << endl;	
	}
	return 0;
}