#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    
    auto it1 = lower_bound(a.begin(), a.end(), x);
    auto it2 = upper_bound(a.begin(), a.end(), x);

    if(it1 != a.end() && *it1 == x) {
        int first_pos = it1 - a.begin();
        int last_pos = it2 - a.begin() - 1;
        int frequency = it2 - it1;

        cout << "First occurrence at index: " << first_pos << endl;
        cout << "Last occurrence at index: " << last_pos << endl;
        cout << "Total frequency of " << x << " = " << frequency << endl;
    } else {
        cout << "Element " << x << " not present." << endl;
    }

    return 0;
}
