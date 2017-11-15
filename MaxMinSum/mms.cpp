#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr(5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
    }

    vector<long int> sums;
    for(int i = 0; i < arr.size(); i++) {
    	long int sum = 0;
    	for(int j = 0; j < arr.size() - 1; j++) {
    		sum += arr[j];
    	}
    	sums.push_back(sum);
    	rotate(arr.begin(), arr.begin()+1, arr.end());
    }

    long int max = 0;
    long int min = 0;
    for(int i = 0; i < sums.size(); i++) {
    	if(i == 0) min = sums[i];
    	if(sums[i] > max) {
    		max = sums[i];
    	}
    	if(sums[i] < min) {
    		min = sums[i];
    	}
    }

    cout << min << " " << max << endl;
    return 0;
}
