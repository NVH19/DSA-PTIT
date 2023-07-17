#include<bits/stdc++.h>
using namespace std;
int n,visited[1002];
vector<int> res[10002];
stack<int> st;
int a[10003],b[10002];
int cnt=1,DEM=0;
void reset(){
    for(int i=1; i<=n; i++) visited[i]=0;
}

void dfs(int u){
    a[u]=b[u]=cnt++;
    st.push(u);
    for(auto x : res[u]){
        if(a[x]){
            b[u] = min(a[x],b[u]);
        }
        else{
            dfs(x);
            b[u] = min(b[u],b[x]);
        }
    }
    if(a[u]==b[u]){
        DEM++;
        int tmp = st.top();
        st.pop();
        a[tmp] = b[tmp] =1e9;
        while(tmp != u){
            tmp = st.top();st.pop();
            a[tmp] = b[tmp] = 1e9;
        }
    }
}
main(){
    int m;
    cin >> n >> m;
    for(int i=1; i<=m; i++){
        int x, y;
        cin >> x  >> y;
        res[x].push_back(y);
    }
    DEM=0;
    for(int i=1; i<=n; i++){
        if(!a[i]){
            dfs(i);
        }
    }
    cout << DEM;
}