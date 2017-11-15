#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;

    int z = 1;
    for(int i = 0; i < n; i++) {
    	for(int j = 0; j < n - z; j++) {
    		cout << " ";
    	}
    	for(int k = 0; k < z; k++) {
    		cout << "#";
    	}
    	cout << endl;
    	z++;
    }
    return 0;
}
