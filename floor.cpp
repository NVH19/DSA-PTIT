#include<bits/stdc++.h>
using namespace std;
bool cmp(long long a, long long b){
    return a > b;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long k;
        cin >> k;
        long long a[n+2];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int tmp = lower_bound(a,a+n,k) - a;
        if(tmp==0 && a[tmp]>k){
            cout << -1 ;
        }
        else{
            if(a[tmp]!=k){
                cout << tmp;
            }
            else cout << tmp+1;
        }
        cout << endl;
    }
}