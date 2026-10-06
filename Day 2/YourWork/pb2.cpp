#include<bits/stdc++.h>
using namespace std;
int main(){

    pair<int,pair<double, string> > p;
    p.first = 10;
    p.second.first =3.85;
    p.second.second = "Shawon";

    cout<<"Id: "<<p.first<<"\n";

    cout<<"CGPA: "<<p.second.first<<"\n";
    cout<<"Name: "<<p.second.second<<"\n";
    return 0;
}