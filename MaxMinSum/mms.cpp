#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr(5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
    }

    multiset<long int> sums;
    for(int i = 0; i < arr.size(); i++) {
    	long int sum = 0;
    	for(int j = 0; j < arr.size() - 1; j++) {
    		sum += arr[j];
    	}
    	sums.insert(sum);
    	rotate(arr.begin(), arr.begin()+1, arr.end());
    }

    

    cout << *sums.begin() << " " << *sums.rbegin() << endl;
    return 0;
}
