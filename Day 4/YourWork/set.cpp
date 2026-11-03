#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    set<int> s;

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    cout << "Number of unique elements: " << s.size() << endl;

    cout << "Unique sorted elements: ";
    for(auto x : s)
    {
        cout << x << " ";
    }

    int target;
    cin >> target;
    if(s.count(target))
    cout << "\nTarget found";

    else
    cout << "\nTarget not found";

    return 0;
}