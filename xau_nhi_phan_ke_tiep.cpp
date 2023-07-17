#include<bits/stdc++.h>
using namespace std;
string a;
int main(){
    int t;
    cin >> t;
    while(t--){
        int ok=-1;
        cin >> a;
        for(int i=a.size()-1; i>=0; i--){
            if(a[i]=='0'){
                ok=i;
                break;
            }
        }
        // cout << ok;
        if(ok!=-1){
                for(int i=0; i<a.size(); i++){
                    if(i<ok) cout << a[i];
                    else cout << 1-(a[i]-'0');
                }
        }  
        else{
            for(int i=0; i<=a.size(); i++) cout << 0;
        }
        cout << endl;
    }
}