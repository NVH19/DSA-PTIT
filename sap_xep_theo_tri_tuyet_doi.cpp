#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[n+2];
        multimap<int,int> mp;
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++){
            mp.insert({abs(k-a[i]),a[i]});
        }
        for(auto x : mp){
            cout << x.second << " ";
        }
        cout << endl;
    }
}