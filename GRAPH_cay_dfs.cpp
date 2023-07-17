#include<iostream>
#include<utility>
#include<vector>
#include<cstring>
using namespace std;
int n, a[1002][1002], visited[1002],start;
vector<pair<int,int>> v;
int check(int b[],int n){
    for(int i=1; i<=n; i++){
        if(b[i]==0){
            return 0;
            break;
        }
    }
    return 1;
}
void dfs_tree(int u){
    visited[u]=1;
    for(int i=1; i<=n; i++){
        if(a[u][i]==1 && visited[i]==0){
            int tmp=u,tmp1=i;
            if(tmp>tmp1) swap(tmp,tmp1);
            v.push_back({tmp,tmp1});
            dfs_tree(i);
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
    memset(visited,0,sizeof(visited));
    dfs_tree(start);
    if(check(visited,n)==0){
        cout << "no span tree" << endl;
    }
    else{
        cout << "DFS tree" << endl;
        for(auto x : v){
            cout << x.first << " " << x.second;
            cout << endl;
        }
    }
}