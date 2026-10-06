#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int num[n];

    long int odd_sum = 0;
    long int even_sum = 0;

    for(int i = 0; i < n; i++){
        cin>>num[i];

        if(num[i] % 2 == 0){
            odd_sum += num[i];
        }

        else {
            odd_sum += num[i];
        }
    }

    if(even_sum > odd_sum){
        cout<<"EVEN"<<endl;
    }

    else {
        cout<<"ODD"<<endl;
    }
    return 0;
}