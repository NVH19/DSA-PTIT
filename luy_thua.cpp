#include<bits/stdc++.h>
using namespace std;
int MAX = 1e9 + 7;
long long Pow(int n,int k){
    if(k==0) return 1;
    if(k==1) return n;
    long long m = Pow(n,k/2);
    if(k%2==0) return (m*m)%MAX;
    else return ((m*m)%MAX)*n % MAX;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k; cin >> n >>k;
        cout << Pow(n,k) << endl;
    }
}