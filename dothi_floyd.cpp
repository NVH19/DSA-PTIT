#include<bits/stdc++.h>
using namespace std;
int res[1002][1002];
int main(){
    int n,m;
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            res[i][j] = 1e9;
        }
        res[i][i]=0;
    }
    while(m--){
        int u,v,w;
        cin >> u >> v >> w;
        res[u][v] = res[v][u] = w;
    }
    for(int k=1; k<=n; k++){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(res[i][j] > res[i][k] + res[k][j]){
                    res[i][j] = res[i][k] + res[k][j];
                }
            }
        }
    }
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a  >> b;
        cout << res[a][b] << endl;
    }
}