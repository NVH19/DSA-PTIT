#include<bits/stdc++.h>
using namespace std;
int minelement(int a[],int b[],int n){
    for(int i=0; i<n; i++){
        if(a[i]!=b[i]){
            return i+1;
        }
    }
}
int maxelement(int a[],int b[],int n){
    for(int i=n-1; i>=0; i--){
        if(a[i]!=b[i]){
            return i+1;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+2],b[n+2];
        for(int i=0; i<n; i++){
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b,b+n);
        cout << minelement(a,b,n) << " " << maxelement(a,b,n);
        cout << endl;
    }
}