#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int a[n+2][m+2],c[1005][1005];
        memset(c,-1,sizeof(c));
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                cin >> a[i][j];
            }
        }
        queue<pair<int,int>> q;
        q.push({1,1});
        c[1][1]=0;
        int i,j,x;
        while(!q.empty()){
            pair<int,int> tmp = q.front();
            i = tmp.first;
            j = tmp.second;
            x = a[i][j];
            q.pop();
            if(j+x<=m && c[i][j+x] == -1){
                q.push({i,j+x});
                c[i][j+x] = c[i][j] +1;
            }
            if(i+x<= n && c[i+x][j] == -1){
                q.push({i+x,j});
                c[i+x][j] = c[i][j] +1;
            }
            if(c[n][m]!=-1)
                break;
        }
        cout << c[n][m] << endl;
    }
}