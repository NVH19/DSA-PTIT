#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,s,m;
        cin >> n >> s >> m;
        int dem=0;
        int songaycn = (n+1)/7;
        if(n<m || ((n-m)*6)<m){
            cout << -1;
        }
        else{
            if(s*m % n==0){
                cout << s*m / n;
            }
            else{
                cout << (s*m / n)+1;
            }
        }
        cout << endl;
    }
}