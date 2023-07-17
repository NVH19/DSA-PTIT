#include<bits/stdc++.h>
using namespace std;
int M = 1e9 + 7;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        long long a[n+2]={0};
        a[0]=1,a[1]=1;
        for(int i=2; i<=n; i++){
            for(int j=1; j<=k; j++){
                a[i] =  a[i] + a[i-j];
                a[i] %= M;
            }
        }
        // for(int i=1; i<=n; i++){
        //     cout << a[i] << " ";
        // }
        cout << a[n]%M << endl;
    }
}