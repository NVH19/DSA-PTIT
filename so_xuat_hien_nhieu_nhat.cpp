#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+2];
        int tmp = n/2;
        map<int,int> mp;
        for(int i=0; i<n; i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        vector<int> v;
        for(auto x : mp){
            v.push_back(x.second);
        }
        sort(v.begin(),v.end());
        int d = v[v.size()-1],ok=0;
        for(int i=0; i<n; i++){
            if(mp[a[i]]==d && d > tmp){
                cout << a[i];
                ok=1;
                break;
            }
        }
        if(!ok){
            cout << "NO";
        }
        cout << endl;
    }
}