#include<bits/stdc++.h>
using namespace std;
int check(int a[],int n,int k){
    for(int i=0; i<n-2; i++){
        int l=i+1,r=n-1;
        while(l<r){
            if(a[i]+a[l]+a[r]<k){
                l++;
            }
            else if(a[i]+a[l]+a[r]>k){
                r--;
            }
            else{
               return 1;
            }
        }
    }
    return 0;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[n+2];
        int ok=0;
        for(int i=0; i<n; i++) cin >> a[i];
        sort(a,a+n);
        if(check(a,n,k)) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}