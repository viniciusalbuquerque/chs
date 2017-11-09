#import <iostream>
#import <vector>
using namespace std;

vector<vector<int> > readValues(int nTests) {
	vector<vector<int> > values;
	for(int i = 0; i < nTests; i++) {
		vector<int> tmpValues;
		int high, div, not_div;
		cin >> high >> div >> not_div;	
		tmpValues.push_back(high);
		tmpValues.push_back(div);
		tmpValues.push_back(not_div);
		values.push_back(tmpValues);
	}
	return values;
}

void coutDivs(vector<vector<int> > values) {
	for(int i = 0; i < values.size(); i++) {
		int high = values[i][0];
		int div = values[i][1];
		int not_div = values[i][2];

		vector<int> couting;
		for(int j = 0; j < high; j++) {
			if(j%div == 0 && j%not_div != 0) {
				couting.push_back(j);
			}
		}

		for(int j = 0; j < couting.size(); j++) {
			if(j != couting.size() - 1) {
				cout << couting[j] << " ";	
			} else {
				cout << couting[j] << endl;
			}	
		}
	}
}

int main() {
	int nTests;
	cin >> nTests;
	vector<vector<int> > values = readValues(nTests);	

	coutDivs(values);

	return 0;
}