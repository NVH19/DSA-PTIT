#include<bits/stdc++.h>
using namespace std;
int n, a[1002][1002],visited[1002];
vector<int> v;
void dfs(int u){
    visited[u]=1;
    for(int v=1; v<=n; v++){
        if(a[u][v]==1 && visited[v]==0){
            dfs(v);
        }
    }
}
void result(){
    int bandau=0;
    for(int i=1; i<=n; i++){
        if(visited[i]==0){
            bandau++;
            dfs(i);
        }
    }
    for(int i=1; i<=n; i++){
        memset(visited,0,sizeof(visited));
        visited[i]=1;
        int dem=0;
        for(int j=1; j<=n; j++){
            if(visited[j]==0){
                dem++;
                dfs(j);
            }
        }
        if(dem>bandau) cout << i << " ";
    }
}
int main(){
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j];
        }
    }
    memset(visited,0,sizeof(visited));
    result();
}