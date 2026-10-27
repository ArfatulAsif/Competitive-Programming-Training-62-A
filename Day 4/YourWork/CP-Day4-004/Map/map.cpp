
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> f;

    
    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;
        f[word]++;
    }

    
    cout << "Word Frequencies:" << endl;

    for (auto p : f) {
        cout << p.first << " : " << p.second << endl;
    }

   
    string query;
    cin >> query;

    cout << "Frequency of '" << query << "' is: "
         << f[query] << endl;

    return 0;
}
