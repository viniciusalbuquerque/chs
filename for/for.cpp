#include <iostream>
#include <string>
using namespace std;

void getValue(int n1, int n2) {
	for(int n = n1; n <= n2; n++) {
		if(n > 9) {
			if(n%2 == 0) {
				cout << "even";
			} else {
				cout << "odd";
			}
		} else {
			switch(n) {
				case 1:
					cout << "one";
					break;
				case 2:
					cout << "two";
					break;
				case 3:
					cout << "three";
					break;
				case 4:
					cout << "four";
					break;
				case 5:
					cout << "five";
					break;
				case 6:
					cout << "six";
					break;
				case 7:
					cout << "seven";
					break;
				case 8:
					cout << "eight";
					break;
				default:
				case 9:
					cout << "nine";

			}
		}	
		cout << endl;
	}
}

int main() {
	int n1, n2;
	cin >> n1;
	cin >> n2;
	
	getValue(n1,n2);

	return 0;
}