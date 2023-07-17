#include<bits/stdc++.h>
using namespace std;
long long MAX = 1e9+7;
long long Pow(long long n,long long k){
    if(k==1) return n;
    long long m = (Pow(n, k/2))%MAX;
    if(k%2==0) return ((m%MAX) * (m%MAX))%MAX;
    else return (((m%MAX) * (m%MAX))%MAX) * (n%MAX);
}
long long dao(long long n){
    string tmp = to_string(n);
    reverse(tmp.begin(),tmp.end());
    return stoll(tmp);
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        cout << Pow(n,dao(n))%MAX << endl;
    }
}