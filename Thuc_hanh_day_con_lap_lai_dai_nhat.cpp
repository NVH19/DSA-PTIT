#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int m; cin >> m;
        string s;
        cin >> s;
        int n = s.size();
        int a[n+3][n+2]={0};
        int res=0;
        for(int i=1; i<=n; i++){
            for(int j=1; j<i; j++){
                if(s[i-1] == s[j-1]){
                    a[i][j] = a[i-1][j-1]+1;
                    if(a[i][j] > res){
                        res = a[i][j];
                    }
                }
            }
        }
        cout << res << endl;
    }
}