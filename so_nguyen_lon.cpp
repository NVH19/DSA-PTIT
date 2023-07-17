#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s1,s2;
        cin >> s1 >> s2;
        int n=s1.size(),m=s2.size();
        int a[n+1][m+1];
        for(int i=0; i<=n; i++){
            for(int j=0 ; j<=m; j++){
                if(i==0 || j==0){
                    a[i][j]=0;
                }
                else{
                    if(s1[i-1]==s2[j-1]){
                        a[i][j] = a[i-1][j-1] + 1;
                    }
                    else{
                        a[i][j] = max(a[i-1][j],a[i][j-1]);
                    }
                }
            }
        }
        cout << a[n][m] << endl;
    }
}