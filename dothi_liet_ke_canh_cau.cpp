#include<bits/stdc++.h>
using namespace std;
vector<int> v[1002];
int visited[1002],a[1002],b[1002],c[1002],cnt;
vector<pair<int,int>> res;
void DFS(int u)
{
    visited[u] = 1;
    a[u] = b[u] = cnt++;
    for(int &i : v[u])
    {
        if(!visited[i])
        {
            c[i] = u;
            DFS(i);
            b[u] = min(b[u], b[i]);
            if(b[i] > a[u])
            {
                if(u < i) res.push_back({u, i});
                else res.push_back({i, u});
            }
        }
        else if(i != c[u]) b[u] = min(b[u], a[i]);
    }
}
int cmp(pair<int,int> a, pair<int,int> b){
    if(a.first==b.first) return a.second < b.second;
    return a.first < b.first;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        while(m--){
            int i,j;
            cin >> i >> j;
            v[i].push_back(j);
            v[j].push_back(i);
        }
        cnt=1;
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        memset(c,0,sizeof(c));
        memset(visited,0,sizeof(visited));
       for(int i = 1; i <= n; ++i)
            if(!visited[i])
                DFS(i);
        sort(res.begin(),res.end());
        for(auto x : res){
            cout << x.first << " " << x.second << " ";
        }
        cout << endl;
        res.clear();
        for(int i=1; i<=n; i++){
            v[i].clear();
        }
    }
}