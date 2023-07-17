#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack<int> st;
        string res = "";
        int n = s.size();
        for(int i=0; i<=n; i++){
            st.push(i+1);
            if(s[i]=='I' || i==n){
                while(!st.empty()){
                    res += to_string(st.top());
                    st.pop();
                }
            }
        }
        cout << res << endl;
    }
}