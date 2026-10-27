#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    string s1="Competitive";
    string s2="programming";
    string s3=s1+" "+s2;
    string m="Hello";
    cout<<"Result: "<<s3<<endl;
    cin>>s;
    cout<<"Entered value: "<<s<<endl;

    for (int i = 0; i < s.size(); i++)
    {
        if(i%2==0) {
            s[i]=toupper(s[i]);
        }
    }
    cout<<"Modified string: "<<m<<endl;
    
    return 0;
}