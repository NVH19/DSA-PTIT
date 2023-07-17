#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[n+2];
        map<int,int> mp;
        for(int i=0; i<n; i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        int dem=0;
        for(int i=0; i<n; i++){
            if(mp[a[i]]>0 && mp[k-a[i]]>0){
                if(a[i]==k-a[i]){
                    dem += mp[k-a[i]]-1;
                    mp[a[i]]--;
                }
                else{
                    dem += mp[k-a[i]];
                    mp[a[i]]--;
                }
            }
        }
        cout << dem << endl;
    }
}