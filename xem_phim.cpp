#include<bits/stdc++.h>
using namespace std;
int f[102][25003]={0};
int main(){
    int c,n;
    cin >> c >> n;
    int a[n+1];
    for(int i=1; i<=n; i++) cin >> a[i];
    for(int i=0; i<=n; i++){
        for(int j=0; j<=c; j++){
            if(i==0 || j==0) f[i][j]=0;
            else{
                f[i][j] = f[i-1][j];
                if(j>=a[i]){
                    f[i][j] = max(f[i][j], f[i-1][j-a[i]] + a[i]);
                }
            }
        }
    }
    cout << f[n][c] << endl;
}
