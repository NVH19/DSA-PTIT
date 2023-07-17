#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,v;
        cin >> n >> v;
        int kl[n+2],gt[n+1];
        for(int i=1; i<=n; i++) cin >> kl[i];
        for(int i=1; i<=n; i++) cin >> gt[i];
        int f[n+1][v+1]={0};
        for(int i=0; i<=n; i++){
            for(int j=0; j<=v; j++){
                if(i==0 || j==0) f[i][j]=0;
                else{
                    f[i][j] = f[i-1][j];
                    if(j>=kl[i]){
                        f[i][j] = max(f[i][j], f[i-1][j-kl[i]] + gt[i]);
                    }
                }
            }
        }
        cout << f[n][v] << endl;
    }
}