#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[n+2];
        for(int i=0; i<n; i++) cin >> a[i];
        sort(a,a+n);
        int s1=0,s2=0;
        int tmp = min(k,n-k);
        for(int i=0; i<tmp; i++) s1 += a[i];
        for(int i=tmp; i<n; i++) s2 += a[i];
        cout << abs(s1-s2) << endl;
    }
}