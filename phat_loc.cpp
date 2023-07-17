#include<bits/stdc++.h>
using namespace std;
int n,ok;
char a[1000];
void sinh(){
    int i=n;
    while(i>0 && a[i]=='8'){
        a[i]='6';
        i--;
    }
    if(i==0) ok=0;
    else a[i]='8';
}
int check(char a[],int n){
    if(n<6 || a[1]!= '8' || a[n]!='6') return 0;
    for(int i=1; i<=n; i++){
        if(a[i]=='8' && a[i+1]=='8') return 0;
    }
    for(int i=1; i<=n-3; i++){
        if(a[i]=='6' && a[i+1]=='6' && a[i+2]=='6' && a[i+3]=='6'){
            return 0;
        }
    }
    return 1;
}
int main(){
    cin >> n;
    for(int i=1; i<=n; i++){
        if(i==1){
            a[i]='8';
        }
        else a[i]='6';
    }
    ok=1;
    while(ok){
        if(check(a,n)){
            for(int i=1; i<=n; i++) cout << a[i];
            cout << endl;
        }
        sinh();
    }
    
}