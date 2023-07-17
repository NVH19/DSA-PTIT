#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        int ok=0;
        int a[n+2];
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(a[i]==x) ok=1;
        }
        if(ok) cout << 1;
        else cout << -1;
        cout << endl;
    }
}