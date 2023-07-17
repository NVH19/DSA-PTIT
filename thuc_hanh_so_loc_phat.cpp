#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
       long long n;
       cin >> n;
       long long cnt=0;
       for(int i=8; i<=n; i+=8){
            string tmp = to_string(i);
            if(tmp.find('8')<tmp.size()) cnt++;
            if(tmp.find('6')<tmp.size()) cnt++;
       }
       cout << cnt << endl;
    }
}