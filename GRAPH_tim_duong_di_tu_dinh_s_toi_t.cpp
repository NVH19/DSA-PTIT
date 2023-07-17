#include<bits/stdc++.h>
using namespace std;
int a[1002][1002],n;
int visited[1002],parent[1002],parent1[1002],visited1[1002];
vector<int> v;
vector<int> v1;
void dfs(int u){
    visited[u] = 1;
    for(int v=1; v<=n; v++){
        if(a[u][v]==1 && visited[v]==0){
            parent[v] = u;
            dfs(v);
            
        }
    }
}
void bfs(int u){
    queue<int> q;
    q.push(u);
    visited1[u]=1;
    while(!q.empty()){
        int s = q.front();
        q.pop();
        for(int v=1; v<=n; v++){
            if(a[s][v]==1 && visited1[v]==0){
                q.push(v);
                visited1[v]=1;
                parent1[v]=s;
            }
        }
    }
}
int main(){
    cin >> n;
    int s,t;
    cin >> s >> t;
    int s1=s,t1=t;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j];
        }
    }
    memset(visited,0,sizeof(visited));
    memset(visited1,0,sizeof(visited1));
    memset(parent1,0,sizeof(parent1));
    memset(parent,0,sizeof(parent));
    dfs(s);
    bfs(s);
    if(!visited[t] || !visited1[t]) cout << "no path";
    else{
        while(t!=s){
            v.push_back(t);
            t = parent[t];
        }
        v.push_back(s);
        cout << "DFS path: ";
        for(auto x : v){
            cout << x << " ";
        }
        cout << endl;
        while(t1!=s1){
            v1.push_back(t1);
            t1 = parent1[t1];
        }
        v1.push_back(s1);
        cout << "BFS path: ";
        for(auto x : v1){
            cout << x << " ";
        }
    }
}