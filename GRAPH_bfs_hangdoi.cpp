#include<bits/stdc++.h>
using namespace std;
int visited[1002],n;
int a[1005][1005];
queue<int> q;
void bfs(int u){
    q.push(u);
    visited[u] = 1;
    while(!q.empty()){
        int s = q.front();
        cout << s << " ";
        q.pop();
        for(int v=1; v<=n; v++){
            if(visited[v]==0 && a[s][v]==1){
                q.push(v);
                visited[v] = 1;
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
    memset(visited,0,sizeof(visited));
    bfs(8);
}