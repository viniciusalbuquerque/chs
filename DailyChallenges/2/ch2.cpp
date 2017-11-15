#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    double price;
    int tip;
    int tax;
    cin >> price;
    cin >> tip;
    cin >> tax;
    
    double totalD = price + price/100 * tip + price/100 * tax;
    int total = round(totalD);
    
    cout << "The total meal cost is " << total << " dollars.";
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
