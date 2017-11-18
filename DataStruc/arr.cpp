#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <set>

using namespace std;

int main() {
    int n;
    int m;
    cin >> n >> m;
    unordered_multiset<int> ms;
    for(int i = 0; i < n; i++) {
        ms.insert(0);
    }

    for(int a0 = 0; a0 < m; a0++){
        int a,b,k;
        cin >> a >> b >> k;

        a--;
        b--;

        if(a <= ms.size()) {
            unordered_multiset<int>::iterator iter = ms.begin();
            advance(iter, a);
            ms.insert(iter, *iter + k);
            ++iter;
            cout << "test" << endl;
            ms.erase(iter);
        }

        if(b <= ms.size()) {
            unordered_multiset<int>::iterator iter = ms.begin();
            advance(iter, b);
            ms.insert(iter, *iter + k);
            ++iter;
            cout << "test1" << endl;
            ms.erase(iter);
        }

        for(unordered_multiset<int>::iterator iter = ms.begin(); iter != ms.end(); ++iter) {
            cout << *iter << " ";
        }
        cout << endl;
    }

    set<int> s (ms.begin(), ms.end());
    cout << *s.rbegin() << endl;
    return 0;
}
