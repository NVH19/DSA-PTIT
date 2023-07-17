#include<bits/stdc++.h>
using namespace std;
int visited[1002], n;
vector<int> v[1002];
void dfs(int u){
    cout << u << " ";
    visited[u]=1;
    for(auto x: v[u]){
        if(visited[x]==0){
            dfs(x);
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int m,start;
        cin >> n >> m >> start;
        memset(visited,0,sizeof(visited));
        
        while(m--){
            int i,j;
            cin >> i >> j;
            v[i].push_back(j);
            v[j].push_back(i);
        }
        // for(int i=1; i<=n; i++){
        //     cout << i << ": ";
        //     for(auto x : v[i]){
        //         cout << x << " ";
        //     }
        //     cout << endl;
        // }
        dfs(start);
        for(int i=1; i<=n; i++){
            v[i].clear();
        }
        // for(int i=1; i<=n; i++){
        //     cout << i << ": ";
        //     for(auto x : v[i]){
        //         cout << x << " ";
        //     }
        //     cout << endl;
        // }
        cout << endl;
    }
}