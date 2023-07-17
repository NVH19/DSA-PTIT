#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        stack<string> st;
        for(int i=0; i<n; i++){
            if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='^'){
                string tmp = st.top(); st.pop();
                string tmp1 = st.top(); st.pop();
                string tmp2 = s[i] + tmp1 + tmp;
                st.push(tmp2);
            }
            else{
                st.push(string(1,s[i]));
            }
        }
        cout << st.top() << endl;
    }
}