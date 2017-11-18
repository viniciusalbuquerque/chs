#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	cin.ignore();
	vector<string> strs;
	for(int i = 0; i < n; i++) {
		string str;
		getline(cin, str);
		string even;
		string odd;
		for(int j = 0; j < str.size(); j++) {
			if(j%2==0) {
				even += str[j];
			} else {
				odd += str[j];
			}
		}
		string s = even + " " + odd;
		strs.push_back(s);
	}

	for(vector<string>::iterator it = strs.begin(); it != strs.end(); ++it ) {
		cout << *it << endl;
	}
	return 0;
}