#include<bits/stdc++.h>
using namespace std;
int n,m,MAX = 1e9;
int a[10002][10002];
vector<int> v[10002];
int dijkstra(int start,int End){
    vector<long long> res(n+1,MAX);
    res[start] = 0;
    priority_queue<pair<int,int> , vector<pair<int,int>>, greater<pair<int,int>>> q;
    q.push({0,start});
    while(!q.empty()){
        pair<int,int> tmp = q.top();
        q.pop();
        int d = tmp.first;
        int dinh = tmp.second;
        for(auto x : v[dinh]){
            if(res[x] > res[dinh] + v[dinh][x]){
                res[x] = res[dinh] + v[dinh][x];
                q.push({res[x],x});
            }
        }
    }
    return res[End];
}
int main(){
    int t;
    cin >> n >> m >> t;
    for(int i=1; i<=m; i++){
        int x,y,z;
        cin >> x >> y >> z;
        v[x].push_back(y);
        v[x][y] = z;
    }
    while(t--){
        int start,End;
        cin >> start >> End;
        cout << dijkstra(start, End) << endl;
    }
}