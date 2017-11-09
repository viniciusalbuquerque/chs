#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
	string text;
	getline (std::cin,text);
	unordered_set<char> set;
	for(int i = 0; i < text.length(); i++) {
		char c = text[i];

		if(set.find(c) != set.end()) {
			cout << "letter " << c << " repeated\n";
			break;
		}

		set.insert(c);

		if(i == text.length() - 1) {
			cout << "no repeated letters\n";
		}
	}
	return 0;
}