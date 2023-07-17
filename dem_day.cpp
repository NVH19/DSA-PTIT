#include<bits/stdc++.h>
using namespace std;
int mod = 123456789;
long long Pow(long long n, long long k){
    if(k==0) return 1;
    long long tmp = Pow(n, k/2);
    if(k%2==0){
        return (tmp%mod)*(tmp%mod)%mod;
    }
    else return (tmp%mod)*(tmp%mod)%mod * n%mod;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        cout << Pow(2,n-1) << endl;
    }
}