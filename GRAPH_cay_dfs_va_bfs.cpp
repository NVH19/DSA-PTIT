#include<bits/stdc++.h>
using namespace std;
int n, a[1002][1002], visited1[1002] , visited2[1002],start;
vector<pair<int,int>> v1,v2;
void dfs(int u){
    visited1[u]=1;
    for(int i=1; i<=n; i++){
        if(a[u][i]==1 && visited1[i]==0){
            int tmp=u,tmp1=i;
            if(tmp>tmp1) swap(tmp,tmp1);
            v1.push_back({tmp,tmp1});
            dfs(i);
        }
    }
}
void bfs(int u){
    queue<int> q;
    q.push(u);
    visited2[u]=1;
    while(!q.empty()){
        int s = q.front();
        q.pop();
        for(int i=1; i<=n; i++){
            if(a[s][i]==1 && visited2[i]==0){
                q.push(i);
                visited2[i]=1;
                int tmp=s,tmp1=i;
                if(tmp>tmp1) swap(tmp,tmp1);
                v2.push_back({tmp,tmp1});
            }
        }
    }
}
int main(){
    cin >> n >> start;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j];
        }
    }
    memset(visited1,0,sizeof(visited1));
    memset(visited2,0,sizeof(visited2));
    dfs(start);
    bfs(start);
    cout <<  "DFS tree" << endl;
    for(auto x : v1){
        cout << x.first << " " << x.second << endl;
    }
    cout <<  "BFS tree" << endl;
    for(auto x : v2){
        cout << x.first << " " << x.second << endl;
    }
}