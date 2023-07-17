#include<bits/stdc++.h>
using namespace std;
int index(char c){
    if(c=='^') return 4;
    if(c=='*' || c=='/') return 3;
    if(c=='+' || c=='-') return 2;
    return 1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        stack<char> st;
        string res = "";
        for(int i=0; i<n; i++){
            if(isalpha(s[i])){
                res += s[i];
            }
            else if(s[i]=='(') st.push(s[i]);
            else if(s[i]==')'){
                while(!st.empty() && st.top()!='('){
                    res += st.top();
                    st.pop();
                }
                st.pop();
            }
            else if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='^'){
                while(!st.empty() && index(st.top()) >= index(s[i])){
                    res += st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            if(st.top()!='(') res += st.top();
            st.pop();
        }
        cout << res << endl;

    }
}