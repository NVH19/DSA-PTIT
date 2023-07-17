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
            b[i] = a[i];
        }
        sort(b,b+n);
        int l=0,r=n-1;
        int ok=1;
        while(l<r){
            if((a[l]==b[r]&&a[r]==b[l])||(a[l]==b[l]&&a[r]==b[r])){
                l++;
                r--;
            }
            else{
                ok=0;
                break;
            }
        }
        if(ok) cout << "Yes";
        else cout << "No";
        cout << endl;
    }
}
