#include<bits/stdc++.h>
using namespace std;
int number(string s){
    string s1=s.substr(5);
    return stoi(s1);
}
int main(){
    int t;
    cin >> t;
    stack<int> st;
    string a="PUSH";
    string b="PRINT";
    string c="POP";
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        if(s.find(a)<=s.size()){
            st.push(number(s));
        }
        else if(s.find(b)<=s.size()){
            if(st.empty()) cout << "NONE";
            else cout << st.top();
            cout << endl;
        }
        else if(s.find(c)<=s.size()){
            if(!st.empty()){
                st.pop();
            }
        }
    }
}