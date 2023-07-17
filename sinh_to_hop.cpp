#include<bits/stdc++.h>
using namespace std;
int n,k,ok,a[1000];
void sinh(){
    int i = k;
    while(i>0 && a[i]==n-k+i){
        i--;
    }
    if(i==0) ok = 0;
    else a[i]++;
    for(int j=i+1; j<=k; j++) a[j] = a[j-1] + 1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        ok = 1;
        for(int i=1; i<=k; i++) a[i] = i;
        while(ok){
            for(int i=1; i<=k; i++) cout << a[i];
            cout << " ";
            sinh();
        }
        cout << endl;
    }
}