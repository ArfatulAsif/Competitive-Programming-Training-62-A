#include<bits/stdc++.h>
using namespace std;


int main()
{

    int n, q;
    cin >> n >> q;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }


    int prefixsum[n];
    prefixsum[0] = a[0];
    for(int i = 1; i < n; i++)
    {
        prefixsum[i] = prefixsum[i-1] + a[i];
        
    }


    for(int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;

        if(l == 0)
        {
            cout << "Sum from " << l+1 << " to " << r+1 << " = " << prefixsum[r] << endl;
        }

        else
        {
            cout << "Sum from " << l+1 << " to " << r+1 << " = " << (prefixsum[r] - prefixsum[l-1]) << endl;
        }

    }



    return 0;
}