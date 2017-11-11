#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> v;
	for(int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}

	int index;
	cin >> index;

	int indexF = 1;
	if(index == 0) {
		indexF = 0;
	}

	v.erase(v.begin() + (index - indexF));

	int b,e;
	cin >> b >> e;

	int bFactor = 1;
	if(b == 0) {
		bFactor = 0;
	}
	v.erase(v.begin() + b - bFactor, v.begin() + e - 1);

	cout << v.size() << endl;
	for(int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;

	return 0;
}