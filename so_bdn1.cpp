#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        queue<string> q;
        q.push("1");
        int cnt=0;
        while(!q.empty()){
            string tmp = q.front();
            if(stoll(tmp)<=n){
                cnt++;
            }
            else{
                break;
            }
            q.pop();
            q.push(tmp + "0");
            q.push(tmp + "1");
        }
        cout << cnt << endl;
    }
}