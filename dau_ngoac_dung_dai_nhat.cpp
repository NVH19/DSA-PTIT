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
        int cnt=0,res=-1;
        for(int i=0; i<n; i++){
            if(s[i]=='(') st.push(s[i]);
            else{
                if(!st.empty()){
                    st.pop();
                    cnt += 2;
                }
                else{
                    cnt=0;
                }
                res = max(res,cnt);
            }
        }
        if(res==0) cout << -1;
        else cout << res;
        cout << endl;
    }
}