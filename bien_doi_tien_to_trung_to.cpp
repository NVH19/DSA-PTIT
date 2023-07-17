#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack<string> st;
        int n = s.size();
        for(int i=n-1; i>=0; i--){
            string tmp="";
            if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i] =='/'){
                tmp += '(';
                tmp += st.top(); st.pop();
                tmp += s[i] + st.top(); st.pop();
                tmp += ')';
                st.push(tmp);
            }
            else{
                st.push(string(1,s[i]));
            }
        }
        cout << st.top() << endl;
    }
}