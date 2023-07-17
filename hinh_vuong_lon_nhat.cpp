#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int a[n+1][m+1];
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                cin >> a[i][j];
            }
        }
        int b[n+1][m+1]={0},maxx=0;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(a[i][j]){
                    b[i][j] = min(b[i-1][j],min(b[i-1][j-1],b[i][j-1])) + 1;
                }
                maxx = max(maxx,b[i][j]);
            }
        }
        cout << maxx << endl;
    }
}