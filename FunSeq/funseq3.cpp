#include <iostream>
#include <set>
using namespace std;

int main() {
	int n1;
	cin >> n1;

	multiset<int> firstValues;

	for(int i = 0; i < n1; i++) {
		int tmp;
		cin >> tmp;
		firstValues.insert(tmp);
	}

	int n2;
	cin >> n2;

	multiset<int> secondValues;

	for(int i = 0; i < n2; i++) {
		int tmp;
		cin >> tmp;
		secondValues.insert(tmp);
	}

	multiset<int> v1;
	multiset<int> v2;
	if(firstValues.size() <= secondValues.size()) {
		v1 = firstValues;
		v2 = secondValues;
	} else {
		v1 = secondValues;
		v2 = firstValues;
	}

	multiset<int> finalValues;
	multiset<int>::iterator it2 = v2.begin();
	int count = 1;
	for(multiset<int>::iterator it = v1.begin(); it != v1.end(); ++it) {
		if(*it == *it2) {
			finalValues.insert(count);
		}
		count++;
		++it2;
	}

	int size = finalValues.size() - 1;
	int counter = 0;
	for(multiset<int>::iterator it = finalValues.begin(); it != finalValues.end(); ++it) {
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