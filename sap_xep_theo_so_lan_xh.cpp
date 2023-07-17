#include<bits/stdc++.h>
using namespace std;
pair<int,int> p;
int cmp(pair<int,int> a, pair<int,int> b){
    if(a.second != b.second){
        return a.second > b.second;
    }
    return a.first < b.first;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+2];
        vector<pair<int,int>> v;
        map<int,int> mp;
        for(int i=0; i<n; i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        for(int i=0; i<n; i++){
            v.push_back({a[i],mp[a[i]]});
        }
        sort(v.begin(),v.end(),cmp);
        for(auto x : v){
            cout << x.first << " ";
        }
        cout << endl;
    }
}