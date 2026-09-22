#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair < int, pair < string, double > > p;
    p.first = 17;
    p.second.first = "Zareefa";
    p.second.second = 3.85;

    cout<<"ID: "<<p.first<<endl;
    cout<<"Name: "<<p.second.first<<endl;
    cout<<"CGPA: "<<p.second.second<<endl;

    return 0;


}