#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    map<string, int> mp;
    for(int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;

        mp[temp]++;
    }

    cout << "Frequencies: \n";
    for(auto x : mp)
    {
        cout << x.first << " : " << x.second << endl;
    }

    string target;
    cin >> target;
    cout << "Frequency of " << target << " is " << mp[target]; 

    return 0;
}