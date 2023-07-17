#include<bits/stdc++.h>
using namespace std;
int Xor(int n, int m){
    if(n+m>1) return 0;
    else return n+m;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int a[1002];
        for(int i=0; i<s.size(); i++){
            a[i] = s[i]-'0';
        }
        int b[1002];
        b[0] = a[0];
        for(int i=1; i<s.size(); i++){
            b[i] = Xor(a[i],a[i-1]);
        }
        for(int i=0; i<s.size(); i++) cout << b[i];
        cout << endl;
    }
}