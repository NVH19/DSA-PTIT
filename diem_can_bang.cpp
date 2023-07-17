#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+3];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int s=0,ok=0,idx;
        long long tong = accumulate(a,a+n,0);
        for(int i=0; i<n; i++){
            s += a[i];
            if(s == (tong - s + a[i])){
                idx = i+1;
                ok=1;
                break;
            }
        }
        if(ok){
            cout << idx;
        }
        else cout << -1;
        cout << endl;
    }
}