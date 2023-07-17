#include<bits/stdc++.h>
using namespace std;
int n,ok,a[10002];
void sinh(){
    int i=n-1,j=n;
    while(i>0 && a[i]>a[i+1]){
        i--;
    }
    if(i==0) ok=0;
    else{
        while(a[i]>a[j]){
            j--;
        }
        swap(a[i],a[j]);
        reverse(a+i+1,a+n+1);
    }
}
int check(int a[],int b[],int n){
    for(int i=1; i<=n; i++){
        if(a[i]!=b[i]) return 0;
    }
    return 1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        int b[n+2];
        int dem=1;
        ok=1;
        for(int i=1; i<=n; i++) cin >> b[i];
        for(int i=1; i<=n; i++) a[i]=i;
        while(ok){
            if(check(a,b,n)){
                cout << dem << endl;
                break;
            }
            else{
                sinh();
                dem++;
            }
        }
    }
}