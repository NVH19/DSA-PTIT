#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int kl[n+1],gt[n+1];
    for(int i=1; i<=n; i++){
        cin >> kl[i];
        cin >> gt[i];
    }
    long long a[n+1][m+1]={0};
    for(int i=0; i<=n; i++){
        for(int j=0; j<=m; j++){
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
    cout << a[n][m];
}