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
        int dem=0;
        int l= *min_element(a,a+n), r = *max_element(a,a+n);
        for(int i=l; i<r; i++){
            if(mp[i]<1){
                dem++;
            }
        }
        cout << dem << endl;
    }
}