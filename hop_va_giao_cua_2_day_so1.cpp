#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int a[n+2],b[m+2];
        for(int i=0; i<n; i++) cin >> a[i];
        // sort(a,a+n);
        for(int i=0; i<m; i++) cin >> b[i];
        // sort(b,b+m);
        vector<int> v(n+m+2);
        vector<int> v1(n+m+2);
        auto it = set_union(a,a+n,b,b+m,v.begin());
        auto it1 = set_intersection(a,a+n,b,b+m,v1.begin());
        v.resize(it - v.begin());
        v1.resize(it1 - v1.begin());
        sort(v.begin(),v.end());
        sort(v1.begin(),v1.end());
        for(auto x : v) cout << x << " ";
        cout << endl;
        for(auto x : v1) cout << x << " ";
        cout << endl;
    }
}