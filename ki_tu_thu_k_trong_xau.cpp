#include<bits/stdc++.h>
using namespace std;
long long Pow(int n,long long k){
    if(k==0) return 1;
    if(k==1) return n;
    long long tmp = Pow(n,k/2);
    if(k%2==0) return tmp*tmp;
    return tmp*tmp*n;
}
char result(int n,long long k){
    long long tmp = (Pow(2,n)/2);
    if(k==tmp) return char(n+64);
    else if(k<tmp) return result(n-1,k);
    return result(n-1,k-tmp);
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        long long k;
        cin >> n >> k;
        cout << result(n,k) << endl;
    }
}