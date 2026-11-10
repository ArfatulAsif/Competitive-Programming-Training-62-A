#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> u(n);
    vector<int> v(m);
    vector<int> merged;

    for(int i = 0; i < n; i++)
    {
        cin >> u[i];
    }
    for(int i = 0; i < m; i++)
    {
        cin >> v[i];
    }

    int l = 0;
    int r = 0;
    while(l < n && r < m)
    {
        if(u[l] <= v[r])
        {
            merged.push_back(u[l]);
            l++;
        }
        else
        {
            merged.push_back(v[r]);
            r++;
        }
    }

    for(int i = l; i < n; i++)
    {
        merged.push_back(u[i]);
    }

    for(int i = r; i < m; i++)
    {
        merged.push_back(v[i]);
    }

    for(int i = 0; i < n+m; i++)
    {
        cout << merged[i] << " ";
    }

    return 0;
}