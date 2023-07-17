#include<bits/stdc++.h>
using namespace std;
int n,a[1000],ok;
void sinh(){
    int i=n;
    while(i>=1 && a[i]==1){
        a[i] = 0;
        i--;
    }
    if(i==0) ok=0;
    else a[i]=1;
}
int check(int a[], int b[], int n, int k){
    int s=0;
    for(int i=1; i<=n; i++){
        s += a[i]*b[i];
    }
    if(s==k) return 1;
    return 0;
}
int main(){
    int k,dem=0;
    cin >> n >> k;
    int b[n+1];
    for(int i=1; i<=n; i++) cin >> b[i];
    ok = 1;
    for(int i=1; i<=n; i++) a[i]=0;
    while(ok){
        if(check(a,b,n,k)){
            for(int i=1; i<=n; i++){
                if(a[i]!=0) cout << b[i] << " ";
            }
            cout << endl;
            dem++;
        }
        sinh();
    }
    cout << dem;
}