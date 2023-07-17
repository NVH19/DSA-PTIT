#include<bits/stdc++.h>
using namespace std;
int check(string s){
    int dem=0;
    for(int i=0; i<s.size();i++){
        if(s[i]=='0') dem++;
    }
    return dem == s.size();
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(check(s)){
            for(int i=0; i<s.size(); i++){
                cout << '1';
            }
            cout << endl;
        }
        else{
            int idx;
            for(int i=s.size()-1; i>=0; i--){
                if(s[i]=='1'){
                    idx = i;
                    break;
                }
            }
            for(int i=idx; i<s.size(); i++){
                if(s[i]=='1') s[i]='0';
                else s[i]='1';
            }
            cout << s << endl;
        }
    }
}