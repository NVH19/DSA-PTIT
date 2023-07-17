#include<bits/stdc++.h>
using namespace std;
vector<int> v[1002];
int visited[1002];
void bfs(int u){
    queue<int> q;
    q.push(u);
    visited[u]=1;
    while(!q.empty()){
        int s = q.front();
        cout << s << " ";
        q.pop();
        for(auto x : v[s]){
            if(visited[x]==0){
                q.push(x);
                visited[x]=1;
            }
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
        bfs(start);
        for(int i=1; i<=n; i++){
            v[i].clear();
        }
        cout << endl;
    }
}