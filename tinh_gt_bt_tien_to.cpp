#include<bits/stdc++.h>
using namespace std;
int reset(int a,int b, char c){
    if(c=='+') return a+b;
    if(c=='-') return a-b;
    if(c=='*') return a*b;
    if(c=='/') return a/b;
    if(c=='^') return pow(a,b);
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack<int> st;
        int n=s.size();
        for(int i=n-1; i>=0; i--){
            if(isdigit(s[i])){
                st.push(s[i]-'0');
            }
            else{
                int tmp=st.top(); st.pop();
                int tmp1=st.top(); st.pop();
                st.push(reset(tmp,tmp1,s[i]));
            }
        }
        cout << st.top() << endl;
    }
}