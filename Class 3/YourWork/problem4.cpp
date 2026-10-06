#include<bits/stdc++.h>
using namespace std;


int main()
{

    int n, target;
    cin >> n >> target;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int l = 0;
    int r = n-1;
    int pos = -1;
    while(l<=r)
    {
        int mid = l+r/2;
        if(v[mid] > target)
        r = mid-1;

        else if(v[mid] < target)
        l = mid+1;

        else if(v[mid] == target)
        {
            pos = mid;
            break;
        }
    }


    if(pos == -1)
    cout << "Not found";

    else
    cout << "Found at index " << pos;



    return 0;
}