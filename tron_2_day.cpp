#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int a[n+2],b[m+2];
        vector<int> v;
        for(int i=0; i<n; i++){
            cin >> a[i];
            v.push_back(a[i]);
        }
        for(int i=0; i<m; i++){
            cin >> b[i];
            v.push_back(b[i]);
        }
        sort(v.begin(),v.end());
        for(auto x : v){
            cout << x << " ";
        }
        cout << endl;
    }
}