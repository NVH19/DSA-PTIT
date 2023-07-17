#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map<char,int> mp;
        string s; cin >> s;
        for(int i=0; i<s.size(); i++){
            mp[s[i]]++;
        }
        while(n--){
            int max = INT_MIN;
            char tmp;
            for(auto it : mp){
                if(it.second > max){
                    max = it.second;
                    tmp = it.first;
                }
            }
            mp[tmp]--;
        }
        long long sum=0;
        for(auto it : mp){
            sum += it.second*it.second;
        }
        cout << sum << endl;
    }
}