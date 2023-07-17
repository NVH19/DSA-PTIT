#include<bits/stdc++.h>
int n,a[1000],k,ok;
using namespace std;
void sinh(){
    int i = n;
    while(i > 0 && a[i] == 1){
        a[i] = 0;
        i--;
    }
    if(i==0) ok = 0;
    else a[i] = 1;
}
int check(int a[],int n,int k){
    int dem = 0;
    for(int i=1; i<=n; i++){
        if(a[i]==1) dem++;
    }
    return dem==k;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        ok = 1;
        for(int i = 1; i<=n; i++) a[i] = 0;
        while(1){
            if(check(a,n,k)){
                for(int i=1; i<=n; i++)
                    cout << a[i];
                cout << endl;
            }
            if(ok==0)   break;
            sinh();
        }
        // cout << endl;
    }
}