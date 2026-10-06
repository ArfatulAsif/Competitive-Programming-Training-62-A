#include<bits/stdc++.h>
using namespace std;
int main(){

    string s = "hello";
    for(int i = 0;i < s.size();i++)
    {
        if(1 % 2 == 0)
        {
            s[i] = toupper(s[i]);
        }
    }
    cout<<"Prints:"<<s<<endl;

    return 0;
}