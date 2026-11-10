#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin >> s;

    int l = 0;
    int r = s.size()-1;

    int flag = 0;

    while(l < r)
    {
        if (s[l] != s[r])
        {
            flag = 1;
            break;
        }
    }

    if(flag)
    cout << "not a palindrome";

    else
    cout << "its a valid palindrome";

    return 0;
}