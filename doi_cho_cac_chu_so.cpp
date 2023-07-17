#include<bits/stdc++.h>
using namespace std;
int index(string s,int &c){
    int i;
    int tmp1 = INT_MIN;
    for(int j=c; j<s.size(); j++){
        if(s[j]-'0' >= tmp1){
            tmp1 = s[j]-'0';
            i = j;
        }
    }
    return i;
}
int check(string s){
    for(int i=0; i<s.size()-1; i++){
        if(s[i]<s[i+1])
            return 0;
    }
    return 1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int k;
        string s;
        cin >> k >> s;
        int a = 0;
        int tmp=0;
        while(k--){
            if(check(s)) break;
            int maxx = index(s,tmp);
            if(s[tmp] != s[maxx]){
                swap(s[maxx],s[tmp]);
            }
            else{
                k += 1;
            }
            tmp++;
        }
        cout << s << endl;
    }
    // string s;
    // cin >> s;
    // for(int i=0; i<s.size(); i++){
    //     cout << index(s,i) << " ";
    // } 
}