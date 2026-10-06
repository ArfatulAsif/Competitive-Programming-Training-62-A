#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin >> s;
    int q;
    cin >> q;

    int n = s.length();

    int presumA[n], presumB[n], presumC[n];
    if(s[0] == 'a')
    {
        presumA[0] = 1;
        presumB[0] = 0;
        presumC[0] = 0;
    }

    else if(s[0] == 'b')
    {
        presumA[0] = 0;
        presumB[0] = 1;
        presumC[0] = 0;
    }

    else
    {
        presumA[0] = 0;
        presumB[0] = 0;
        presumC[0] = 1;
    }

    

    for(int i = 1; i < n; i++)
    {
        if(s[i] == 'a')
        {
            presumA[i] = presumA[i-1] + 1;
            presumB[i] = presumB[i-1];
            presumC[i] = presumC[i-1];
        }

        else if(s[i] == 'b')
        {
            presumA[i] = presumA[i-1];
            presumB[i] = presumB[i-1]+1;
            presumC[i] = presumC[i-1];
        }

        else if(s[i] == 'c')
        {
            presumA[i] = presumA[i-1];
            presumB[i] = presumB[i-1];
            presumC[i] = presumC[i-1]+1;
        }

    }

    for(int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        char x;
        cin >> x;

        if(x == 'a' && l == 0)
        cout << "Count of 'a' in range [" << l+1 << ", " << r+1 << "] = " << presumA[r] << endl;

        else if(x == 'b' && l == 0)
        cout << "Count of 'b' in range [" << l+1 << ", " << r+1 << "] = " << presumB[r] << endl;

        else if(x == 'c' && l == 0)
        cout << "Count of 'c' in range [" << l+1 << ", " << r+1 << "] = " << presumC[r] << endl;

        else if(x == 'a')
        cout << "Count of 'a' in range [" << l+1 << ", " << r+1 << "] = " << (presumA[r]-presumA[l-1]) << endl;

        else if(x == 'b')
        cout << "Count of 'b' in range [" << l+1 << ", " << r+1 << "] = " << (presumB[r]-presumB[l-1]) << endl;

        else if(x == 'c')
        cout << "Count of 'c' in range [" << l+1 << ", " << r+1 << "] = " << (presumC[r]-presumC[l-1]) << endl;
    }


    return 0;
}