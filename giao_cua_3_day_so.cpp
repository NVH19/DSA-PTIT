#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m,p;
        cin >> n >> m >> p;
        long long a[n+2],b[m+2],c[p+2];
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<m; i++) cin >> b[i];
        vector<long long> v2;
        for(int i=0; i<p; i++){
            cin >> c[i];
            v2.push_back(c[i]);
        }
        vector<long long> v1(n+m+2);
        auto it = set_intersection(a,a+n,b,b+m,v1.begin());
        v1.resize(it - v1.begin());
        sort(v1.begin(),v1.end());
        vector<long long> v3(n+m+p+2);
        auto it2 = set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());
        v3.resize(it2 - v3.begin());
        if(v3.size()==0){
            cout << -1;
        }
        else{
            for(auto x : v3){
                cout << x << " ";
            }
        }
        cout << endl;
    }
}