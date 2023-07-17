#include<bits/stdc++.h>
using namespace std;
int tinh(int a,int b,int c){
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
        int n=s.size();
        stack<int> st;
        for(int i=0; i<n; i++){
            if(isdigit(s[i])){
                st.push(s[i]-'0');
            }
            else{
                if(!st.empty()){
                    int tmp1 = st.top(); st.pop();
                    int tmp2 = st.top(); st.pop();
                    st.push(tinh(tmp2,tmp1,s[i]));
                }
            }
        }
        cout << st.top() << endl;
    }
}