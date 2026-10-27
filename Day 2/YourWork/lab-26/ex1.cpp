#include <bits/stdc++.h>
using namespace std;
int main(){
    pair<int,int> p1;
    p1.first =10;
    p1.second =20;

    cout<<"First value: "<<p1.first<<endl;
     cout<<"Second value: "<<p1.second<<endl;
    
    
     pair<string,pair<int,double> >q;
     q.first="Sara";
     q.second.first=26;
     q.second.second=3.75;

     cout<<q.first<<endl;
     cout<<q.second.first<<endl;
     cout<<q.second.second<<endl;

     pair< pair<double,string>,pair<int,pair<int,double> > >s[50];
     s[0].first.first=26;
     cout<<s[0].first.first<<endl;
     return 0;
}
