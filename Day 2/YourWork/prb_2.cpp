#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string longest = "";

        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;

            if (s.length() > longest.length()) {
                longest = s;
            }
        }

        cout << longest << endl;
    }

    return 0;
}