#include <bits/stdc++.h>
using namespace std;

int main() {
    pair<int, pair<string, double> > student_data;
    student_data = {1, {"Ishan", 3.75}};
    cout << "ID: " << student_data.first << endl;
    cout << "Name: " << student_data.second.first << endl;
    cout << "CGPA: " << student_data.second.second << endl;
    
    return 0;
}