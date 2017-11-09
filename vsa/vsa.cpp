#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > getArrays(int n) {
	vector<vector<int> > v;
	for(int i = 0; i < n; i++) {
		int size;
		cin >> size;
		vector<int> arr;
		for(int j = 0; j < size; j++) {
			int tmp;
			cin >> tmp;
			arr.push_back(tmp);
		}
		v.push_back(arr);
	}
	return v;
}

vector<vector<int> > getQueries(int n) {
	vector<vector<int> > v;
	for(int i = 0; i < n; i++) {
		vector<int> arr;
		int a,b;
		cin >> a >> b;
		arr.push_back(a);
		arr.push_back(b);
		v.push_back(arr);
	}
	return v;
}

void dealWithVectors(vector<vector<int> > data, vector<vector<int> > queries) {
	for(int i = 0; i < queries.size(); i++) {
		int x = queries[i][0];
		int y = queries[i][1];
		cout << data[x][y] << endl;
	}
}

int main() {
	int numberOfArrays;
	int numberOfQueries;

	cin >> numberOfArrays >> numberOfQueries;

	vector<vector<int> > data = getArrays(numberOfArrays);
	vector<vector<int> > queries = getQueries(numberOfQueries);

	dealWithVectors(data, queries);

	return 0;
}