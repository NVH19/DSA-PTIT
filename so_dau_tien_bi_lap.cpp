#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+2];
        map<int,int> mp;
        for(int i=0; i<n; i++){ 
            cin >> a[i];
            mp[a[i]]++;
        }
        int ok=0;
        for(int i=0; i<n; i++){
            if(mp[a[i]]>1){
                cout << a[i];
                ok=1;
                break;
            }
        }
        if(ok==0) cout << "NO";
        cout << endl;
    }
}