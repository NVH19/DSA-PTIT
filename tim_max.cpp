#include<bits/stdc++.h>
using namespace std;
int M = 1e9 + 7;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+2];
        for(int i=0; i<n; i++) cin >> a[i];
        sort(a,a+n);
        long long s=0;
        for(int i=0; i<n; i++){
            long long s1 = a[i]*i;
            s1 %= M;
            s += s1;
            s %= M;
        }
        cout << s << endl;
    }
}