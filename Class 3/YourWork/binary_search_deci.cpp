#include <bits/stdc++.h>
using namespace std;

int main() {
    double n;
    cin >> n;

    double low = 0, high = max(1.0, n);

    for(int iter = 0; iter < 100; iter++) {
        double mid = low + (high - low) / 2.0;

        if(mid * mid <= n) {
            low = mid;
        } else {
            high = mid;
        }
    }

    cout << fixed << setprecision(6);
    cout << "Precise Square Root = " << low << endl;

    return 0;
}
