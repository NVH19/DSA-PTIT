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
        for(int i=0; i<n; i++){
            string tmp="";
            if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
                tmp = ')' + tmp;
                tmp = st.top() + tmp; st.pop();
                tmp = s[i] + tmp;
                tmp = '(' + st.top() + tmp; st.pop();
                st.push(tmp);
            }
            else{
                st.push(string(1,s[i]));
            }
        }
        cout << st.top() << endl;
    }
}