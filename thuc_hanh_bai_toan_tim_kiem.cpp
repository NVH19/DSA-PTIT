#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,s,k;
        cin >> n >> s >> k;
        int a[n+2];
        for(int i=1; i<=n; i++){
            cin >> a[i];
        }
        int sum=0;
        int i=s;
        int ok=0;
        while(sum <= k && i>=1){
            sum += a[i];
            if(sum>k && a[i]<k){
                cout << i+1;
                ok=1;
                break;
            }
            if(i==1){
                cout << i;
                ok=1;
                break;
            }
            i--;
        }
        if(ok==0) cout << -1;
        cout << endl;
    }
}