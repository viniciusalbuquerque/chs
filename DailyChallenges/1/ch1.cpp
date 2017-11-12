#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second integer, double, and String variables.
    int t;
    double a;
    string str;
    cin >> t;
    cin >> a;
    cin.ignore();
    getline(cin, str);

    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    
    // Print the sum of the double variables on a new line.
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << i+t << endl;
    cout.precision(1);
    cout << fixed;
    cout << a+d << endl;
    cout << s + str << endl;

    return 0;
}