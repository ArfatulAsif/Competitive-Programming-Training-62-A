#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, target;
    cin >> n >> target;

    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Assuming the array is already sorted. If not, sort(a.begin(), a.end());
    int left = 0, right = n - 1;
    bool found = false;

    while(left < right) {
        long long current_sum = a[left] + a[right];

        if(current_sum == target) {
            cout << "Pair found: " << a[left] << " and " << a[right] << endl;
            found = true;
            break;
        }
        else if(current_sum < target) {
            left++; // We need a larger sum, move left pointer right
        }
        else {
            right--; // We need a smaller sum, move right pointer left
        }
    }

    if(!found) {
        cout << "No pair exists that sums to " << target << endl;
    }

    return 0;
}
