#include<bits/stdc++.h>
using namespace std;
int visited[1002];
int n,a[1002][1002];
void dfs(int u){
    visited[u] = 1;
    // cout << u << " ";
    for(int v=1; v<=n; v++){
        if(a[u][v]==1 && visited[v]==0){
            dfs(v);
        }
    }
}
int result(int n){
    int cnt=0;
    for(int i=1; i<=n; i++){
        if(visited[i]==0){
            dfs(i);
            cnt++;
            // cout << endl;
        }
    }
    return cnt;
}
int main(){
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j];
        }
    }
    memset(visited,0,sizeof(visited));
    cout << result(n);
}