#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n, tar;
    cin >> n >> tar;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());


    int l = 0;
    int r = n-1;
    bool flag = false;
    while(l < r)
    {
        if(v[l]+v[r] < tar)
        {
            l++;
        }
        else if(v[l]+v[r] > tar)
        {
            r--;
        }
        else
        {
            cout << v[l] << " " << v[r];
            flag = true;
            break;
        }
        
    }

    if(flag == false)
    cout << "Not found";

    return 0;
}