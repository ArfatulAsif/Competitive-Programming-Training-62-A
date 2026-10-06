#include <bits\stdc++.h>
using namespace std;

int main(){
    //Stories: {ID, {Name, CGPA}}
    pair<int, pair<string, double>> student_data;

    student_data = {1, {"Alice", 3.95}};

    //Printing a nested pair
    cout << "ID:" << student_data.first << "\n";
    cout << "Name:" << student_data.second.first << "\n";
    cout << "CGPA:" << student_data.second.second << "\n";

    return 0;
}