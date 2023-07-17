#include<bits/stdc++.h>
using namespace std;
int n,a[1002],ok=1;
void sinh(){
    int i=n;
    while(i>0 && a[i]==1){
        a[i]=0;
        i--;
    }
    if(i==0) ok=0;
    else a[i]=1;
}
int Xor(int n, int m){
    if(n+m>1){
        return 0;
    }
    else return n+m;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        ok=1;
        for(int i=1; i<=n; i++) a[i]=0;
        while(ok){
            cout << a[1];
            for(int i=2; i<=n; i++) cout << Xor(a[i],a[i-1]);
            cout << " ";
            sinh();
        }
        cout << endl;
    }
}