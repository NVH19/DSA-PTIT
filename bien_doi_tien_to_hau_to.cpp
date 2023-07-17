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
        for(int i=n-1; i>=0; i--){
            if(isalpha(s[i])) st.push(string(1,s[i]));
            else{
                string tmp1 = st.top(); st.pop();
                string tmp2 = st.top(); st.pop();
                st.push(tmp1 + tmp2 + s[i]);
            }
        }
        cout << st.top() << endl;
    }
}