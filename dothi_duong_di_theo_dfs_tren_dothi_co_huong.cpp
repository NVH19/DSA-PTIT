#include<bits/stdc++.h>
using namespace std;
int n,start,End,visited[1002],parent[1002];
vector<int> res[10003];
vector<int> v;
void dfs(int u){
    visited[u]=1;
    for(auto x : res[u]){
        if(visited[x]==0){
            parent[x]=u;
            dfs(x);
        }
    }
}
void check(int s, int t){
    if(parent[End]==0){
        cout << -1;
        return;
    }
    else{
        while(End != start){
            if(End==0){
                cout << -1;
                return;
            }
            v.push_back(End);
            End = parent[End];
        }
        v.push_back(start);
        reverse(v.begin(),v.end());
        for(int i=0; i<v.size(); i++){
            cout << v[i] << " ";
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int m;
        cin >> n >> m >> start >> End;
        memset(visited,0,sizeof(visited));
        for(int i=1; i<=m; i++){
            int x,y;
            cin >> x >> y;
            res[x].push_back(y);
        }
        
        // for(int i=1; i<=n; i++){
        //     for(int j=0; j<res[i].size() ;j++){
        //         cout << res[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        dfs(start);
        check(start,End);
        v.clear();
        for(int i=1; i<=n; i++){
            res[i].clear();
        }
        cout << endl;
    }
}