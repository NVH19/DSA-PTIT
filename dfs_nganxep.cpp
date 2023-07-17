#include<bits/stdc++.h>
using namespace std;
int n,a[1001][1001];
bool visited[1001];
void dfs(int u){
    stack<int> st;
    st.push(u);
    cout << u << " ";
    visited[u] = true;
    while(!st.empty()){
        int s = st.top();
        st.pop();
        for(int v=1; v<=n; v++){
            if(a[s][v]==1 && visited[v]==false){
                cout << v << " ";
                st.push(s);
                st.push(v);
                visited[v]=true;
                break;
            }
        }
    }
}
int main(){
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j];
        }
    }
    for(int i=1; i<=n; i++){
        visited[i]=false;
    }
    dfs(1);
}