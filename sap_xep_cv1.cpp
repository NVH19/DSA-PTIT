#include<bits/stdc++.h>
using namespace std;
int cmp(pair<int,int> a, pair<int,int> b){
    return a.second < b.second;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+2],b[n+3];
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++) cin >> b[i];
        vector<pair<int,int>> v;
        for(int i=0; i<n; i++){
            v.push_back({a[i],b[i]});
        }
        sort(v.begin(),v.end(),cmp);
        int idx = 0 , cnt = 1;
        for(int i=1; i<v.size(); i++){
            if(v[i].first >= v[idx].second){
                cnt++;
                idx = i;
            }
        }
        cout << cnt << endl;
    }
}