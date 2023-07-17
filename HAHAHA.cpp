#include<bits/stdc++.h>
using namespace std;
int n,ok;
char a[1000];
void sinh(){
    int i=n;
    while(i>0 && a[i]=='H'){
        a[i]='A';
        i--;
    }
    if(i==0) ok=0;
    else a[i]='H';
}
int check(char a[],int n){
    if(a[1]!='H' || a[n]!='A') return 0;
    for(int i=1; i<n; i++){
        if(a[i]=='H' && a[i+1] =='H'){
            return 0;
        }
    }
    return 1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n; ok=1;
        for(int i=1; i<=n; i++) a[i]='A';
        while(ok){
            if(check(a,n)){
                for(int i=1; i<=n; i++) cout << a[i];
                cout << endl;
            }
            sinh();
        }
    }
}