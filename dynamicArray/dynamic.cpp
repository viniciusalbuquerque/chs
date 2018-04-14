#include <vector>
#include <string>
#include <iostream>
using namespace std;

vector<string> split_string(string);


int queryResult(int n, int lastAnswer, int type, int x, int y, vector<vector<int> > &seqs) {

    int result = ((x ^ lastAnswer) % n);

    vector<int> *v = &(seqs[result]); 

    if(type == 1) {
        v->push_back(y);
        return lastAnswer;
    }

    int index = y % v->size();

    result = (*v)[index];

    return result;

}

/*
 * Complete the dynamicArray function below.
 */
vector<int> dynamicArray(int n, vector<vector<int> > queries) {
    int lastAnswer = 0;

    vector<int> dynamic;
    vector<vector<int> > seqs;
    for(int i = 0; i < n; i++) {
        vector<int> temp;
        seqs.push_back(temp);
    }

    for(int i = 0; i < queries.size(); i++) {
        // cout << "query: " << i << endl;
        vector<int> query = queries[i];
        lastAnswer = queryResult(n, lastAnswer, query[0], query[1], query[2], seqs);
        if(query[0] == 2)
            dynamic.push_back(lastAnswer);

        // cout << "lastAnswer: " << lastAnswer << endl;

        // for(int x = 0; x < seqs.size(); x++) {
        //     cout << "seq" << x+1 << ": ";

        //     for(int y = 0; y < seqs[x].size(); y++) {
        //         cout << seqs[x][y] << " ";    
        //     }

        //     cout << endl;
        // }
    }


    return dynamic;
}

int main()
{
    // ofstream fout(getenv("OUTPUT_PATH"));

    string nq_temp;
    getline(cin, nq_temp);

    vector<string> nq = split_string(nq_temp);

    int n = stoi(nq[0]);

    int q = stoi(nq[1]);

    vector<vector<int> > queries(q);
    for (int queries_row_itr = 0; queries_row_itr < q; queries_row_itr++) {
        queries[queries_row_itr].resize(3);

        for (int queries_column_itr = 0; queries_column_itr < 3; queries_column_itr++) {
            cin >> queries[queries_row_itr][queries_column_itr];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    vector<int> result = dynamicArray(n, queries);
    for (int result_itr = 0; result_itr < result.size(); result_itr++)
        cout << result[result_itr] << endl;

    // for (int result_itr = 0; result_itr < result.size(); result_itr++) {
        // fout << result[result_itr];

    //     if (result_itr != result.size() - 1) {
    //         fout << "\n";
    //     }
    // }

    // fout << "\n";

    // fout.close();

    return 0;
}

char myPred(const char &x, const char &y) {
    return x == y and x == ' ';
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), myPred);

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
