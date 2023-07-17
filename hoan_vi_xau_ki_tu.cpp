#include<bits/stdc++.h>
using namespace std;
int n,ok,a[1000];
char b[1000];
void sinh(){
    int i=n-1,j=n;
    while(i>0 && a[i]>a[i+1]){
        i--;
    }
    if(i==0) ok=0;
    else{
        while(j>0 && a[i]>a[j]){
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
        string s;
        cin >> s;
        n = s.size();
        for(int i=1; i<=n; i++) a[i]=i;
        ok=1;
        while(ok){
            for(int i=1; i<=n; i++) cout << s[a[i]-1];
            cout << " ";
            sinh();
        }
        cout << endl;
    }
}