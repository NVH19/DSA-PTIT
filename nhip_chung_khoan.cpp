#include<bits/stdc++.h>
using namespace std;
int b[1000002];
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+2];
        for(int i=0; i<n; i++){
            cin >> a[i];
            b[i]=1;
        }
        stack<int> st;
        for(int i=0; i<n; i++){
            if(!st.empty()){
                while(!st.empty() && a[i] >= a[st.top()]){
                    b[i] += b[st.top()];
                    st.pop();
                }
                st.push(i);
            }
            else{
                st.push(i);
            }
            cout << b[i] << " ";
        }
        cout << endl;
    }
}