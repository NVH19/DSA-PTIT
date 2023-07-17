#include<bits/stdc++.h>
using namespace std;
int n,m;
int main(){
    int t;
    cin >> t;
    while(t--){
        vector<int> res[1002];
        cin >> n >> m;
        while(m--){
            int x,y;
            cin >> x >> y;
            res[x].push_back(y);
            res[y].push_back(x);
        }
    }
}