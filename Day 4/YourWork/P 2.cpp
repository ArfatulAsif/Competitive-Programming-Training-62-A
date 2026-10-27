#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> freq;

    for(int i = 0; i < n; i++) {
        string word;
        cin >> word;
        freq[word]++;
    }

    cout << "Word Frequencies:" << endl;

    for(auto i = freq.begin(); i != freq.end(); i++) {
        cout << i->first << " : " << i->second << endl;
    }


    string query;
    cin >> query;
    cout << "Frequency of '" << query << "' is: " << freq[query] << endl;

    return 0;
}

