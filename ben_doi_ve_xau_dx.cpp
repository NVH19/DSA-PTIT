#include<bits/stdc++.h>
using namespace std;
int a[102][102];
int result(string s){
    int n = s.size();
    memset(a,0,sizeof(a));
    for(int i=n-2 ;i>=0; i--){
        for(int j=i+1; j<n;j++){
            if(s[i]==s[j]) a[i][j] = a[i+1][j-1];
            else a[i][j] = min(a[i+1][j],a[i][j-1]) + 1;
        }
    }
    return a[0][n-1];
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << result(s) << endl;
    }
}