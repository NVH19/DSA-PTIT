#include<bits/stdc++.h>
using namespace std;
int thuaso(int m){
    int n = m;
    int tmp;
    for(int i=2; i<=sqrt(n); i++){
        while(n%i==0){
            tmp=i;
            n/=i;
        }
    }
    if(n>1) tmp=n;
    return tmp;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int l,r;
        cin >> l >> r;
        long long sum=0;
        for(int i=l; i<=r; i++){
            sum += thuaso(i);
        }
        cout << sum << endl;
    }
}