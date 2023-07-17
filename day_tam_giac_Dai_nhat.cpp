#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+2];
        for(int i=0; i<n; i++) cin >> a[i];
        int res=0,s=0;
        for(int i=0; i<n-1; i++){
            if(a[i]<a[i+1]){
                s++;
            }
            else{
                s--;
            }
            if(s<=0){
                s=0;
            }
            else{
                res = max(res,s);
            }
        }
        cout << res << endl;
    }
}