#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m,p;
        cin >> n >> m >> p;
        int a[n+2],b[m+2],c[p+2];
        map<int,int> mp;
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        vector<int> v(n+m+2);
        for(int i=0; i<m; i++) {
            cin >> b[i];
        }
        auto it = set_intersection(a,a+n,b,b+m,v.begin());
        v.resize(it - v.begin());
        sort(v.begin(),v.end());
        vector<int> v1;
        for(int i=0; i<p; i++){
            cin >> c[i];
            v1.push_back(c[i]);
        }
        vector<int> v2(n+m+p+2);
        auto it2 = set_intersection(v.begin(),v.end(),v1.begin(),v1.end(),v2.begin());
        v2.resize(it2 - v2.begin());
        sort(v2.begin(),v2.end());
        if(v2.size()==0){
            cout << "NO";
        }
        else{
            for(auto x : v2){
                cout << x << " ";
            }
        }
        cout << endl;
    }
}