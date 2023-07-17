#include<bits/stdc++.h>
using namespace std;
int result(long long a[],int n){
    for(int i=n-1; i>=2; i--){
        int l=0,r=i-1;
        while(l<r){
            if(a[l]+a[r]==a[i]){
                return 1;
            }
            else if(a[l]+a[r]<a[i]){
                l++;
            }
            else r--;
        }
    }
    return 0;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long a[n+2];
        for(int i=0; i<n; i++) cin >> a[i];
        sort(a,a+n);
        for(int i=0; i<n; i++) a[i] *= a[i];
        if(result(a,n)) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}