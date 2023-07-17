#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+2];
        for(int i=0; i<n; i++) cin >> a[i];
        sort(a,a+n);
        int res=INT_MAX;
        for(int i=0; i<n-1; i++){
            int tmp = a[i+1]-a[i];
            res = min(res,tmp);
        }
        cout << res << endl;
    }
}