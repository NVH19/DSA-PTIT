#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int n = s.size();
    int a[200]={0},b[200];
    for(int i=0; i<n; i++){
        a[i] = s[i]-'A';
    }
    int res = 0;
    // for(int i=0; i<n; i++){
    //     int tmp=1;
    //     for(int j=0; j<i; j++){
    //         if(s[j]<=s[i]){
    //             tmp = max(tmp,a[j]+1);
    //         }
    //     }
    //     a[i] = tmp;
    //     res = max(res,a[i]);
    // }
    // for(int i=0; i<n; i++) cout << a[i];
    // cout << res;
    for(int i=0; i<n; i++){
        b[a[i]]=1;
        for(int j=0; j<i; j++){
            if(a[j]<=a[i]){
                b[a[i]] = max(b[a[i]],b[a[j]]+1);
            }
        }
        res = max(res,b[a[i]]);
    }
    cout << res;
}