#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        vector<vector<int>> v(n+1, vector<int>(1,0));
        while(m--){
            int i,j;
            cin >> i >> j;
            v[i].push_back(j);
            v[j].push_back(i);
        }
        for(int i=1; i<=n; i++){
            cout << i << ": ";
            for(int j=1; j<v[i].size(); j++){
                cout << v[i][j] << " "; 
            }
            cout << endl;
        }
    }
}