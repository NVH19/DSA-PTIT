#include<bits/stdc++.h>
using namespace std;
int n,m,start,End;
vector<int> res[10003];
int visited[10002],parent[10022];
vector<int> v;
void bfs(int u){
    queue<int> q;
    q.push(u);
    visited[u]=1;
    while(!q.empty()){
        int s = q.front();
        q.pop();
        for(auto x : res[s]){
            if(visited[x]==0){
                visited[x]=1;
                parent[x] = s;
                q.push(x);
            }
        }
    }
}
void check(int start, int End){
    if(parent[End]==0){
        cout << -1 ;
        return;
    }
    else{
        while(End != start){
            if(End == 0){
                cout << -1;
                return;
            }
            v.push_back(End);
            End = parent[End];
        }
        v.push_back(start);
        reverse(v.begin(),v.end());
        for(auto x : v){
            cout << x << " ";
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m >> start >> End;
        memset(visited,0,sizeof(visited));
        while(m--){
            int x,y;
            cin >> x >> y;
            res[x].push_back(y);
        }
        bfs(start);
        check(start,End);
        v.clear();
        for(int i=1; i<=n; i++){
            for(int j=0; j<res[i].size(); j++){
                res[i].clear();
            }
        }
        cout << endl;
    }
}