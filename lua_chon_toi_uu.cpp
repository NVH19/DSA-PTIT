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
        int m,p;
        vector<pair<int,int>> v;
        for(int i=0; i<n; i++){
            cin >> m >> p;
            v.push_back({m,p});
        }
        sort(v.begin(),v.end(),cmp);
        int idx = 0, cnt = 1;
        for(int i=1; i<v.size(); i++){
            if(v[i].first >= v[idx].second){
                cnt++;
                idx = i;
            }
        }
        cout << cnt << endl;
    }
}