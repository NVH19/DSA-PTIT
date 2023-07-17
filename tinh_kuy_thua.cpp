#include<bits/stdc++.h>
using namespace std;
int M = 1e9+7;
long long Pow(int a,long long b){
    if(b==0) return 1;
    if(b==1) return a;
    long long tmp = Pow(a,b/2);
    if(b%2==0) return (tmp%M * tmp%M)%M;
    return (tmp%M * tmp%M)%M * a%M;
}
int main(){
    int a,ok=1;
    long long b;
    while(ok){
        cin >> a >> b;
        if(a==0 && b==0) break;
        cout << Pow(a,b) << endl;
    }
}