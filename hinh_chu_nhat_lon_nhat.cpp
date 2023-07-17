#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long a[n+2],b[n+2],c[n+2];
        for(int i=0; i<n; i++) cin >> a[i];
        stack<int> st;
        st.push(-1);
        for(int i=0; i<n; i++){
            while(st.size()>1 && a[i] <= a[st.top()]) st.pop();
            b[i] = st.top()+1;
            st.push(i);
        }
        while(!st.empty()) st.pop();
        st.push(n);
        for(int i=n-1; i>=0; i--){
            while(st.size()>1 && a[i] <= a[st.top()]) st.pop();
            c[i] = st.top()-1;
            st.push(i);
        }
        long long res=0;
        for(int i=0; i<n; i++){
            res = max(res,(c[i]-b[i]+1)*a[i]);
        }
        cout << res << endl;
    }
}