#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n+2][n+2];
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j];
        }
    }
    vector<int> res[1002];
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(a[i][j]==1){
                res[i].push_back(j);
            }
        }
    }
    for(int i=1; i<=n; i++){
        for(auto x : res[i]){
            cout << x << " ";
        }
        cout << endl;
    }
}