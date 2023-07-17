#include<bits/stdc++.h>
using namespace std;
int visited[1002];
vector<int> v[1002];
void dfs(int u){
    cout << u << " ";
    visited[u]=1;
    for(auto  x : v[u]){
        if(visited[x]==0){
            dfs(x);
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m,start;
        cin >> n >> m >> start;

        while(m--){
            int i,j;
            cin >> i >> j;
            v[i].push_back(j);
        }
        memset(visited,0,sizeof(visited));
        dfs(start);
        for(int i=1; i<=n; i++){
            v[i].clear();
        }
        cout << endl;
    }
}