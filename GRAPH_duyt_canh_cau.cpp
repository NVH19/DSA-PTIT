#include<bits/stdc++.h>
using namespace std;
int n, a[1002][1002], visited[1002];
void dfs(int u){
    visited[u]=1;
    for(int v=1; v<=n; v++){
        if(a[u][v]==1 && visited[v]==0 ){
            dfs(v);
        }
    }
}
void dfs2(int u, int x, int y){
    visited[u]=1;
    for(int i=1; i<=n; i++){
        if((u==x && i==y) ||(u==y && i==x)) continue;
        if(a[u][i]==1 && visited[i]==0){
            dfs2(i,x,y);
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
        for(int j=i; j<=n; j++){
            memset(visited,0,sizeof(visited));
            int dem=0;
            for(int k=1; k<=n; k++){
                if(visited[k]==0){
                    dem++;
                    dfs2(k,i,j);
                }
            }
            if(dem>bandau) cout << i << " " << j << endl;
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
    result();
}