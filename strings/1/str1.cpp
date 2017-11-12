#include <iostream>
#include <string>
using namespace std;

int main() {
	string input1;
	string input2;

	cin >> input1;
	cin >> input2;

	int len1 = input1.size();
	int len2 = input2.size();

	string str = input1 + input2;

	cout << len1 << " " << len2 << endl;
	cout << str << endl;

	input1[0] = input2[0];
	input2[0] = str[0];

	cout << input1 << " " << input2 << endl;

	return 0;
}