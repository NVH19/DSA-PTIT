#include<bits/stdc++.h>
using namespace std;
long long Pow(int n,long long k){
    if(k==0) return 1;
    long long tmp = Pow(n,k/2);
    if(k%2==0) return tmp*tmp;
    else return tmp*tmp*n;
}
int find(int n,long long k){
    long long m = Pow(2,n-1);
    long long c = (Pow(2,n))/2;
    if(k==c) return n;
    else if(k<c){
        return find(n-1,k);
    }
    else return find(n-1,k-c);

}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        long long k;
        cin >> n >> k;
        cout << find(n,k) << endl;
    }
}