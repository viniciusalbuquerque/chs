#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
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
    sort(v.begin(), v.end());
    
    for(int i = 0; i < v.size(); i++) {
        if(i != v.size()-1) {
            cout << v[i] << " ";
        } else {
            cout << v[i] << endl;
        }

    }
    
    return 0;
}
