#include<bits/stdc++.h>
using namespace std;
bool visited[1002];
int n;
int a[1005][1005];
void dfs(int u){
    cout << u << " ";
    visited[u] = true;
    for(int v=1; v<=n; v++){
        if(a[u][v]==1 && visited[v]==false){
            dfs(v);
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
        visited[i] = false;
    }
    dfs(6);
}