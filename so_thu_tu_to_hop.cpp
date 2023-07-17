#include<bits/stdc++.h>
using namespace std;
int n,k,ok,a[1000],b[1000];
void sinh(){
    int i=k;
    while(i>0 && a[i]==n-k+i){
        i--;
    }
    if(i==0) ok=0;
    else{
        a[i]++;
        for(int j=i+1; j<=k; j++) a[j] = a[j-1] + 1;
    }
}
int check(int a[],int b[],int k){
    for(int i=1; i<=k; i++){
        if(a[i]!=b[i]) return 0;
    }
    return 1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i=1; i<=k ;i++) a[i]=i;
        for(int i=1; i<=k; i++) cin >> b[i];
        ok = 1;
        int dem=1;
        while(ok){
            if(check(a,b,k)){
                cout << dem;
                break;
            }
            else{
                sinh();
                dem++;
            }
        }
        cout << endl;
    }
}