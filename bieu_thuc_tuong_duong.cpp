#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        stack<char> st,st1;
        string ans="";
        int idx=0;
        while(s[idx]=='('){
            idx++;
        }
        for(int i=idx; i<n; i++){
            if(s[i]=='(') st1.push(s[i]);
            if(s[i]==')'){
                if(st1.empty()) continue;
                string tmp="";
                while(!st.empty() && st.top()!='('){
                    if(st.top()=='+') tmp = '-'+tmp;
                    else if(st.top()=='-') tmp = '+' + tmp;
                    else tmp = st.top() + tmp;
                    st.pop();
                    st1.pop();
                }
                st.pop();
                for(int i=0; i<tmp.size(); i++){
                    st.push(tmp[i]);
                }
            }
            else st.push(s[i]);
        }
        while(!st.empty()){
            ans = st.top() + ans;
            st.pop();
        }
        cout << ans << endl;
    }
}