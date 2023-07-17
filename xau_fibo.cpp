#include<bits/stdc++.h>
using namespace std;
long long a[1000];
char fibo(long long n,long long m){
    if(n==1) return 'A';
    if(n==2) return 'B';
    if(m <= a[n-2]) return fibo(n-2,m);
    return fibo(n-1,m-a[n-2]);
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n,m;
        cin >> n >> m;
        a[0]=0,a[1]=1;
        for(int i=2; i<=92; i++){
            a[i] = a[i-2] + a[i-1];
        }
        cout << fibo(n,m) << endl;
    }
}