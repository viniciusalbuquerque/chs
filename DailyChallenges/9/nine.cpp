#include <iostream>
#include <stack>
using namespace std;

stack<int> getBinaryRepresentation(int number) {
	stack<int> binary;
	while(number > 0) {
		int remainder = number % 2;
		number /= 2;
		binary.push(remainder);
	}
	return binary;
}

int getConsecutiveOnesCount(stack<int>& binary) {
	int count = 0;
	int maxCount = 0;
	while(!binary.empty()) {
		int top = binary.top();
		if(top == 1) {
			count++;
			if(count > maxCount) {
				maxCount = count;
			}
		} else {
			count = 0;
		}
		binary.pop();
	}
	return maxCount;
}

int main() {
	int n;
    cin >> n;

    stack<int> binary = getBinaryRepresentation(n);
    int onesCount = getConsecutiveOnesCount(binary);
    cout << onesCount << endl;
	return 0;
}