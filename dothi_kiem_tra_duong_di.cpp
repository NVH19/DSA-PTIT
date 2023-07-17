#include<bits/stdc++.h>
using namespace std;
vector<int> res[10002];
int parent[10002],visited[10002];
int n,m;
void dfs(int u){
    visited[u]=1;
    for(auto x : res[u]){
        if(visited[x]==0){
            parent[x]=u;
            dfs(x);
        }
    }
}
string check(int start, int End){
    if(parent[End]==0){
        return "NO";
    }
    else{
        while(End != start){
            if(End==0){
                return "NO";
            }
            End = parent[End];
        }
    }
    return "YES";
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m;
        memset(visited,0,sizeof(visited));
        memset(parent,0,sizeof(parent));
        for(int i=1; i<=n; i++){
            res[i].clear();
        }
        while(m--){
            int x,y;
            cin >> x >> y;
            res[x].push_back(y);
            res[y].push_back(x);
        }
        // for(int i=1; i<=n; i++){
        //     cout << i << " : ";
        //     for(int j=0; j<res[i].size(); j++){
        //         cout << res[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        int q;
        cin >> q;
        while(q--){
            int start,End;
            cin >> start >> End;
            memset(visited,0,sizeof(visited));
            memset(parent,0,sizeof(parent));
            dfs(start);
            if(visited[End]){
                cout << "YES";
            }
            else cout << "NO";
            cout << endl;
        }
    }
    
}