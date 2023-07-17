#include<bits/stdc++.h>
using namespace std;
int a[1000022];
void sang(){
    for(int i=2; i<1000022; i++){
        a[i]=1;
    }
    for(int i=2; i<sqrt(1000022); i++){
        if(a[i]){
            for(int j=i*i; j<1000022; j+=i){
                a[j]=0;
            }
        }
    }
}
int main(){
    int t;
    cin >> t;
    sang();
    while(t--){
        int n;
        cin >> n;
        int ok=1;
        for(int i=2; i<=n/2; i++){
            if(a[i]==1 && a[n-i]==1){
                cout << i << " " << n-i;
                ok=0;
                break;
            }
        }
        if(ok) cout << -1;
        cout << endl;
    }
}