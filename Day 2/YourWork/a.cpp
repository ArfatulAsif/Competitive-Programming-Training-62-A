//Pair
#include<bits/stdc++.h>
using namespace std;
int main(){

    pair<pair<string, double>,pair<int,pair<int,double> > > p[5];

    p[0].first.first = "Umara";
    p[0].first.second = 3.56;
    p[0].second.first = 90;
    p[0].second.second.first = 15;
    p[0].second.second.second = 3.70;

    cout<<"Name: "<<p[0].first.first<<endl;
    cout<<"CGPA: "<<p[0].second.second.second<<endl;

    //Reverse
 string a = "Umara";
 string b = "Nuffat";

 reverse(a.begin(), a.end());
cout<<"Reverse: "<<a<<endl;

reverse(b.begin()+3,b.begin()+5);
cout<<b<<endl;
    
//Sort

sort(b.begin(),b.end());
cout<<"Sorting of Nuffat:"<<b<<endl;

string c = "kjdgagyhuhufhufijidfhfhfhfug";
int cnt = count(c.begin(),c.end(),'g');
cout<<"Number of g : " <<cnt<<endl;


// Vector

vector<int> v;

v.push_back(17);
v.push_back(5);
v.push_back(2);
v.push_back(15);
v.push_back(6);
v.push_back(9);
v.push_back(1);
v.push_back(4);
v.push_back(5);

cout<<"Numbers are: ";
for ( int i = 0;i<v.size();i++)
{
    cout<<v[i]<<" ";

}
sort(v.begin(), v.end());
for ( int i = 0;i<v.size();i++)
{
    cout<<v[i]<<" ";
}

}