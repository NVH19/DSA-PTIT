#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int a[n+2],b[m+2];
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<m; i++) cin >> b[i];
        long long x = (long long)*max_element(a,a+n) * (long long)*min_element(b,b+m);
        cout << x << endl;
    }
}