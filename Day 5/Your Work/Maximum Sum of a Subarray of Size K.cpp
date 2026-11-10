#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int l = 0;
    int r = k-1;
    long long sum = 0;
    for(int i = l; i <= r; i++)
    {
        sum += v[i];
    }
    long long maxsum = sum;
    

    while(r < n)
    {
        sum = sum-v[l]+v[r+1];

        if(sum > maxsum)
        maxsum = sum;

        l++;
        r++;
    }

    cout << maxsum;


    return 0;
}
