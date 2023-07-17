#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int s,d;
        cin >> s >> d;
        stack<int> st;
        if(s==0 && d==1) cout << 0;
        else if(d*9 < s) cout << -1;
        else{
            s-=1;
            while(d--){
                if(s>=9){
                    st.push(9);
                    s -= 9;
                }
                else if(s>0){
                    st.push(s);
                    s=0;
                }
                else st.push(0);
            }
            cout << st.top()+1;
            st.pop();
            while(!st.empty()){
                cout << st.top();
                st.pop();
            }
        }
        cout << endl;
    }
}