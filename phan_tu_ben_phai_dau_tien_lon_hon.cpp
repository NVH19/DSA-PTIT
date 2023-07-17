#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+2];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        stack<int> st;
        vector<int> v;
        v.push_back(-1);
        st.push(a[n-1]);
        for(int i=n-2; i>=0; i--){
            if(a[i]<st.top()){
                v.push_back(st.top());
                st.push(a[i]);
            }
            else{
                while(!st.empty() && a[i]>=st.top()){
                    st.pop();
                }
                if(!st.empty()){
                    v.push_back(st.top());
                }
                else v.push_back(-1);
                st.push(a[i]);
            }
        }
        for(int i=v.size()-1; i>=0; i--) cout << v[i] << " ";
        cout << endl;
    }
}