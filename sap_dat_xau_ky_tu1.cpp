#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        map<char,int> mp;
        for(int i=0; i<s.size(); i++){
            mp[s[i]]++;
        }
        int max = mp[s[0]];
        for(int i=0; i<s.size(); i++){
            if(mp[s[i]]>max){
                max = mp[s[i]];
            }
        }
        if(max-1 > s.size()-max) cout << -1;
        else cout << 1;
        cout << endl;
    }
}