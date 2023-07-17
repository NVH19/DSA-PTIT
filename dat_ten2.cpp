#include<bits/stdc++.h>
using namespace std;
int n,ok,k;
char a[1002];
void sinh(){
    int i=k;
    while(i>0 && int(a[i]-'A')+1 == n-k+i){
        i--;
    }
    if(i==0) ok=0;
    else{
        a[i] = char(a[i]+1);
        for(int j=i+1; j<=k; j++){
            a[j] = char(a[j-1]+1);
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        ok=1;
        for(int i=1; i<=k; i++) a[i]= char(i-1+'A');
        while(ok){
            for(int i=1; i<=k; i++) cout << a[i];
            cout << endl;
            sinh();
        }
    }
}