#include <iostream>
#include <vector>
#include <math.h> 
#include <set>
using namespace std;

set<int> primes;

vector<vector<int> > readVector(int amountOfTests) {
	vector<vector<int> > numbers(amountOfTests);

	for(int i = 0; i < amountOfTests; i++) {
		for(int j = 0; j < 2; j++) {
			int tmp;
			cin >> tmp;
			numbers[i].push_back(tmp);
		}	
	}
	return numbers;
}

bool isPrime(int value) {
	const bool is_in = container.find(value) != primes.end();
	if(is_in) return true;

	int result = sqrt(value);
	for(int i = 1; i < result; i++) {
		
	}

}

void calculatePrimes(int low, int high) {
	for(int i = low; low < high; i++) {
		if(isPrime(i)) {
			cout << i << "\n";
		}
	}
}

void pass(vector<vector<int> >& numbers) {
	for(int i = 0; i < numbers.size(); i++) {
		calculatePrimes(numbers[i][0], numbers[i][1]);
		cout << "\n";
	}
}

int main() {
	int x;
	cin >> x;
	
	vector<vector<int> > numbers = readVector(x);

	pass(numbers);

	return 0;
}