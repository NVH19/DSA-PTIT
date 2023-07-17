#include<bits/stdc++.h>
using namespace std;
int n,a[1002][1002],visited[1002];
void reset(){
    for(int i=1; i<=n; i++) visited[i]=0;
}
int check(){
    for(int i=1; i<=n; i++){
        if(visited[i]==0){
            return 0;
        }
    }
    return 1;
}
void bfs(int u){
    queue<int> q;
    q.push(u);
    visited[u]=1;
    while(!q.empty()){
        int s = q.front();
        q.pop();
        for(int v=1; v<=n; v++){
            if(a[s][v]==1 && visited[v]==0){
                visited[v]=1;
                q.push(v);
            }
        }
    }
}
int result(int n){
    for(int i=1; i<=n; i++){
        reset();
        bfs(i);
        if(check()==0) return 0;
    }
    return 1;
}
int main(){
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++) cin >> a[i][j];
    }
    if(result(n)) cout << "strongly connected";
    else cout << "not strongly connected";
}