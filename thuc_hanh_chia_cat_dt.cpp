#include<bits/stdc++.h>
using namespace std;
int n,visited[10003];
vector<int> res[1002];
void dfs(int u){
    visited[u]=1;
    for(auto x : res[u]){
        if(visited[x]==0){
            dfs(x);
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int m ;
        cin >> n >> m;
        for(int i=1; i<=m; i++){
            int x,y;
            cin >> x >> y;
            res[x].push_back(y);
            res[y].push_back(x);
        }
        int cnt=0;
        for(int i=1; i<=n; i++){
            if(visited[i]==0){
                cnt++;
                dfs(i);
            }
        }
        int tmp = 1e9;
        for(int i=1; i<=n; i++){
            int d = 0;
            memset(visited,0,sizeof(visited));
            visited[i]=1;
            for(int j=1; j<=n; j++){
                if(visited[j]==0){
                    d++;
                    dfs(j);
                }
            }
            if(d > cnt){
                tmp = i;
                cnt = d;
            }
        }
        if(tmp == 1e9){
            cout << 0;
        }
        else{
            cout << tmp;
        }
        for(int i=1; i<=n; i++){
            res[i].clear();
        }
        cout << endl;
        memset(visited,0,sizeof(visited));
    }
}