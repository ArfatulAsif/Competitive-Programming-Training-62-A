#include <bits/stdc++.h>
using namespace std;
int main(){

    pair <int, pair< string, double> > student_data;
    //student_data = {37, {"Fahim", 3.50}}; 

     student_data.first = 37;
     student_data.second.first ="Fahim";
     student_data.second.second = 3.50;

    cout << "ID: " << student_data.first << "\n";
    cout << "Name: " << student_data.second.first << "\n";
    cout << "CGPA: " << student_data.second.second << "\n";

    return 0;

}