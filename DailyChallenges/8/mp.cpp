#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	map<string, string> agenda;

	for(int i = 0; i < n; i++) {
		string name;
		string phone;
		cin >> name >> phone;
		pair<string,string> contact (name, phone);
		agenda.insert(contact);
	}

	vector<string> outs;
	string input;
	while(cin >> input) {
		
		string str;
		map<string,string>::iterator it = agenda.find(input);
		if(it != agenda.end()) {
			str = input + "=" + it->second;
		} else {
			str = "Not found";
		}
		outs.push_back(str);
	}
	
	for(vector<string>::iterator ite = outs.begin(); ite != outs.end(); ++ite) {
		cout << *ite << endl;
	}

	return 0;
}