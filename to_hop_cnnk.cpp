#include<bits/stdc++.h>
using namespace std;
int M = 1e9+7;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        long long a[n+1][n+1];
        for(int i=1; i<=n; i++){
            for(int j=i; j<=n; j++){
                if(i==1) a[i][j] = j;
                else if(i==j) a[i][j] = 1;
                else a[i][j] = (a[i-1][j-1]%M + a[i][j-1]%M)%M;
            }
        }
        cout << a[k][n] << endl;
    }
}