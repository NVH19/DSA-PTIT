#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,v;
        cin >> n >> v;
        int kl[n+1],gt[n+1];
        for(int i=0; i<n; i++) cin >> kl[i];
        for(int i=0; i<n; i++) cin >> gt[i];
        int a[n+1][v+1];
        for(int i=0; i<=n; i++){
            for(int j=0; j<=v; j++){
                if(i==0 || j==0){
                    a[i][j]=0;
                }
                else{
                    a[i][j] = a[i-1][j];
                    if(j>=kl[i]){
                        a[i][j] = max(a[i][j], a[i-1][j-kl[i]] + gt[i]);
                    }
                }
            }
        }
        cout << a[n][v] << endl;
    }
}