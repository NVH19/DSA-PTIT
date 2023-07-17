#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,s;
        cin >> n >> s;
        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];
        vector<int> check(n+s+2,0);
        check[0] = 1;
        for(int i=0 ;i<n; i++){
            for(int j=s; j>=a[i]; j--){
                if(check[j-a[i]]){
                    check[j] = 1;
                }
            }
        }
        if(check[s]) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}