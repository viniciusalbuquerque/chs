#include <iostream>
#include <set>
using namespace std;

int main() {
	int n;
    cin >> n;
    multiset<int> m;

    for(int i = 0; i < n; i++) {
    	int tmp;
    	cin >> tmp;
    	m.insert(tmp);
    }
    int value = *(m.rbegin());
    cout << m.count(value) << endl;

	return 0;
}