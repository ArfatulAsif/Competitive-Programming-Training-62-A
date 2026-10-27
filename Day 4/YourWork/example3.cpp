#include <bits/stdc++.h>
using namespace std;

bool isValid(string s) {
    stack<char> st;
    
    for(char ch : s) {
        if(ch == '(' || ch == '{' || ch == '[') {
            st.push(ch); // Push opening brackets
        } 
        else {
            if(st.empty()) return false; // Closing bracket with no opening bracket
            
            char top = st.top();
            if((ch == ')' && top == '(') || 
               (ch == '}' && top == '{') || 
               (ch == ']' && top == '[')) {
                st.pop(); // Match found, remove opening bracket
            } else {
                return false; // Mismatched brackets
            }
        }
    }
    
    return st.empty(); // If stack is empty, all brackets were matched
}

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        string s;
        cin >> s;
        if(isValid(s)) {
            cout << s << " -> Balanced" << endl;
        } else {
            cout << s << " -> Not Balanced" << endl;
        }
    }

    return 0;
}
