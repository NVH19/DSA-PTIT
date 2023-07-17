#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+2],b[n+2];
        for(int i=0; i<n; i++){
            cin >> a[i];
            b[a[i]] = 1;
        }
        int res=0;
        for(int i=1; i<n; i++){
            for(int j=0; j<i; j++){
                if(a[j] < a[i]){
                    b[a[i]] = max(b[a[i]],b[a[j]]+1);
                }
            }
            res = max(res,b[a[i]]);
        }
        cout << n-res << endl;
    }
}