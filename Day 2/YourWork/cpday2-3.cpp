#include <bits/stdc++.h>
using namespace std;

int main() {
    
    pair<int, pair<string, double> > student_data;
    

    student_data.first = 1;
    student_data.second.first = "Alice";
    student_data.second.second = 3.95;
    
   
    cout << "ID: " << student_data.first << "\n";
    cout << "Name: " << student_data.second.first << "\n";
    cout << "CGPA: " << student_data.second.second << "\n";
    
    return 0;}
