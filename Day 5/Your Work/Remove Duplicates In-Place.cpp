#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int l = 0;
    int r = 1;
    while(r < n)
    {
        if(v[l] != v[r])
        {
            l++;
            v[l] = v[r];
        }
        r++;
    }

    cout << "No. of unique element: " << l+1 << endl;
    for(int i = 0; i <= l; i++)
    {
        cout << v[i] << " ";
    }


    


    return 0;
}