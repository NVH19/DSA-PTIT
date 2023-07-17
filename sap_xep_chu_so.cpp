#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin.ignore();
        getline(cin,s);
        set<int> se;
        for(int i=0; i<s.size(); i++){
            if(isdigit(s[i]))
            se.insert(s[i]);
        }
        for(auto x : se){
            cout << char(x) << " ";
        }
        cout << endl;
    }
}