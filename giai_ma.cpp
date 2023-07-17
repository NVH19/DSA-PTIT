#include<bits/stdc++.h>
using namespace std;
int a[100];
string s;
int result(){
    int n = s.size();
    if(s[0]=='0') return 0;
    else a[1]=1;
    a[0]=1;
    for(int i=2; i<=n; i++){
        a[i]=0;
        if(s[i-1]>'0') a[i] += a[i-1];
        if(s[i-2]=='1' || s[i-2]=='2' && s[i-1]<='6') a[i] += a[i-2];
    }
    return a[n];
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> s;
        cout << result() << endl;
    }
}