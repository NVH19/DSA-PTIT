#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[n+2],ok=1,idx;
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(a[i]==k){
                ok=0;
                idx=i+1;
            }
        }
        if(ok) cout << "NO" << endl;
        else cout << idx << endl;
    }
}