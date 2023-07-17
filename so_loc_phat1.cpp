#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        queue<string> q;
        stack<string> st;
        q.push("6"); q.push("8");
        while(!q.empty()){
            string tmp = q.front();
            q.pop();
            
            if(tmp.size()==n+1){
                break;
            }
            st.push(tmp);
            q.push(tmp + "6");
            q.push(tmp + "8");
        }
        while(!st.empty()){
            cout << st.top() << " " ;
            st.pop();
        }
        cout << endl;
    }
}