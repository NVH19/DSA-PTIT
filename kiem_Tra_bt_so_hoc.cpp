#include<bits/stdc++.h>
using namespace std;

int result(string s){
    stack<char> st;
    for(auto x : s){
        if(x=='('){
            st.push(x);
        }
        else if(x==')'){
            if(st.empty()){
                return 0;
            }
            else{
                st.pop();
            }
        }
    }
    if(st.empty()) return 1;
    return 0;
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        if(result(s)) cout << "Yes";
        else cout << "No";
        cout << endl;
    }
}