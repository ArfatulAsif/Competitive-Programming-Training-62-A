#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;


    vector<int>v;

    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());


    if(v[0]*v[1]  > v[n-2]*v[n-1])
    {
        cout<<v[0] <<" "<<v[1]<<endl;
    }
    else 
    {
        cout<<v[n-2]<<" "<<v[n-1]<<endl;
    }




}