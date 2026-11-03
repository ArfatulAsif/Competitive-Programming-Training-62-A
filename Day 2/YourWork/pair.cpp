#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, pair<string, double> > student[10];
    
    student[0].first = 28;
    student[0].second.first = "Mehdi";
    student[0].second.second = 3.90;

    student[1] = {28, {"Salman", 3.95}};

    cout << student[0].first << " " << student[0].second.first << " " << student[0].second.second << endl;

    cout << student[1].first << " " << student[1].second.first << " " << student[1].second.second;
    return 0;
}