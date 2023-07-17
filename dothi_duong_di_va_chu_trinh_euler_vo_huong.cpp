#include<bits/stdc++.h>
using namespace std;
int n,m;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a[10002];
        cin >> n >> m;
        while(m--){
            int x, y;
            cin >> x >> y;
            a[x]++;
            a[y]++;
        }
        int cnt=0;
        for(int i=1; i<=n; i++){
            cnt += a[i]&1;
        }
        if(cnt==0){
            cout << 2;
        }
        else if(cnt==2){
            cout << 1;
        }
        else cout << 0;
        cout << endl;
    }
}