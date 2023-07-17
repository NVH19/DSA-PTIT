#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        stack<char> st;
        string ans="";
        for(int i=0; i<n; i++){
            if(isalnum(s[i])){
                st.push(s[i]);
            }
            else if(s[i]==']'){
                string lap="",tmp="";
                while(!st.empty() && isdigit(st.top())==0){
                    tmp = st.top() + tmp;
                    st.pop();
                }
                while(!st.empty() && isdigit(st.top())){
                    lap = st.top() + lap;
                    st.pop();
                }
                if(lap=="") lap="1";
                int cnt = stoi(lap);
                string tmp1 = tmp;
                while(cnt>1){
                    tmp += tmp1;
                    cnt--;
                }
                for(int i=0; i<tmp.size(); i++){
                    st.push(tmp[i]);
                }
            }
        }
        while(!st.empty()){
            ans = st.top()+ans;
            st.pop();
        }
        cout << ans << endl;
    }
}