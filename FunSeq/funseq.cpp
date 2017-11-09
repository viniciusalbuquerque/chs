#include <iostream>
#include <set>
using namespace std;

int main() {
	int n1;
	cin >> n1;

	set<int> firstValues;

	for(int i = 0; i < n1; i++) {
		int tmp;
		cin >> tmp;
		firstValues.insert(tmp);
	}

	int n2;
	cin >> n2;

	set<int> secondValues;

	for(int i = 0; i < n2; i++) {
		int tmp;
		cin >> tmp;
		secondValues.insert(tmp);
	}
	
	set<int> finalValues;
	for(set<int>::iterator it = firstValues.begin(); it != firstValues.end(); ++it) {
		int value = *it;
		if(secondValues.find(value) == secondValues.end()) {
			finalValues.insert(value);		
		}
	}

	int size = finalValues.size() - 1;
	int counter = 0;
	for(set<int>::iterator it = finalValues.begin(); it != finalValues.end(); ++it) {
		cout << *it;
		if(counter != size) {
			cout << " ";
		} else {
			cout << endl;
		}
		counter++;
	}
	return 0;
}