#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int arr[n];


    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }


    int prefixsum[n];
    prefixsum[0] = arr[0];
    cout << "Prefix Sum Array:\n";
    cout << prefixsum[0] << " ";


    for(int i = 1; i < n; i++)
    {
        prefixsum[i] = prefixsum[i-1]+arr[i];
        cout << prefixsum[i] << " ";
    }


    return 0;
}