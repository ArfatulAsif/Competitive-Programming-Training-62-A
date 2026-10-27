#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    set<int> nums;

    for(int i = 1; i <= n; i++){
        int  x;
        cin>>x;
        nums.insert(x);
    }

    int target;
    cin>>target;

    cout<<"values in set : ";
    for(int num : nums){
        cout<<num<<" ";
    }
    cout<<"Total unique values in set: "<<nums.size()<<endl;

    if(nums.count(target)) cout<<target<<" is present in the set";

    else cout<<"Target not present"<<endl;

    return 0;
}