#include<bits/stdc++.h>

using namespace std;
long long check(long long a[], int n, long long k){
    long long dem=0;
    for(int i=0; i<n-2; i++){
        int l=1+i,r=n-1;
        while(l<r){
            if(a[i]+a[l]+a[r]>=k){
                r--;
            }
            else{
                dem+=r-l;
                l++;
            }
        }
    }
    return dem;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        long long k;
        cin >> n >> k;
        long long a[n+2];
        for(int i=0; i<n; i++) cin >> a[i];
        sort(a,a+n);
        cout<< check(a,n,k) << endl;
    }
}