#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    double countP = 0;
    double countN = 0;
    double countZ = 0;
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
       if(arr[arr_i] > 0) {
       		countP++;
       } else if(arr[arr_i] < 0) {
       		countN++;
       } else {
       		countZ++;
       }
    }


    double p = countP/n;
    double N = countN/n;
    double z = countZ/n;

    cout << p << endl << N << endl << z << endl;

    return 0;
}
