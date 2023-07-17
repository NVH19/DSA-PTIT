#include<bits/stdc++.h>
using namespace std;
int n,a[1002],ok;
void sinh(){
    int i=n-1,j=n;
    while(i>0 && a[i]>a[i+1]){
        i--;
    }
    if(i==0) ok =0;
    else{
        while(a[i]>a[j]){
            j--;
        }
        swap(a[i],a[j]);
        reverse(a+i+1,a+n+1);
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=1; i<=n; i++) cin >> a[i];
        ok = 1;
        sinh();
        if(ok){
            for(int i=1; i<=n; i++) cout << a[i] << " ";
        }
        else{
            for(int i=1; i<=n; i++) cout << i << " ";
        } 
        cout << endl;
    }
}