#include<bits/stdc++.h>
using namespace std;
int n,ok;
char a[1000];
void sinh(){
    int i=n;
    while(i>0 && a[i]=='B'){
        a[i]='A';
        i--;
    }
    if(i==0) ok = 0;
    else a[i]='B';
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        ok = 1;
        for(int i=1; i<=n; i++) a[i] = 'A';
        while(ok){
            for(int i=1; i<=n; i++) cout << a[i];
            cout << " ";
            sinh(); 
        }
        cout << endl;
    }
}