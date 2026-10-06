#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int>a(n);

    for(int i = 0; i < n; i++){
        cin>>n;
    }

    vector<long long> pref(n);

    a[0] = pref[0];

    for(int i = 1; i < n; i++){
        pref[i] = pref[i - 1] + a[i];
    }

    cout<<"Preffix sum array : ";

    for(int i = 0; i < n; i++){
        cout<<pref[i]<<" ";
        cout<<endl;
    }

    return 0;
}