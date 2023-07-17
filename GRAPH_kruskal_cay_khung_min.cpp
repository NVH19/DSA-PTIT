#include<bits/stdc++.h>
using namespace std;
int n,a[102][102];
int cmp(tuple<int,int,int> a, tuple<int,int,int> b){
    if(get<2>(a)==get<2>(b)){
        return get<0>(a) < get<0>(b);
    }
    return get<2>(a) < get<2>(b);
}
int main(){
    cin >> n;
    vector<tuple<int,int,int>> v;
    int dH=0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j];
        }
    }
    int visited[1002]={0};
    vector<pair<int,int>> res;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(a[i][j]!=0 && i<j)
                v.push_back({i,j,a[i][j]});
        }
    }
    sort(v.begin(),v.end(),cmp);
    visited[get<0>(v[0])]=1;
    for(int i=0; i<v.size(); i++){
        int t1 = get<0>(v[i]), t2 = get<1>(v[i]), t3 = get<2>(v[i]);
        if(visited[t1]==0 || visited[t2]==0){
            res.push_back({t1,t2});
            visited[t2]=1;
            dH += t3;
        }
        // cout << get<0>(v[i]) << " " << get<1>(v[i]) << " " << get<2>(v[i]) << " ";
        // cout << endl;
    }
    cout << "dH = " << dH <<endl;
    for(auto x : res){
        cout << x.first << " " << x.second <<endl;
    }
}