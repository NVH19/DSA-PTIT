#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int d;
        cin >> d;
        string s;
        cin >> s;
        map<char,int> mp;
        for(int i=0; i<s.size(); i++){
            mp[s[i]]++;
        }
        int maxx = 0;
        for(auto x : mp){
            if(x.second > maxx){
                maxx = x.second;
            }
        }
        if(maxx * d > s.size()+1) cout << -1;
        else cout << 1;
        cout << endl;
    }
}