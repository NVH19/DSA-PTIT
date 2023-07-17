#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;  cin >> n;
        queue<string> q;
        q.push("1");
        while(n--){
            if(!q.empty()){
                string tmp = q.front();
                q.pop();
                cout << tmp << " ";
                q.push(tmp + "0");
                q.push(tmp + "1");
            }
        }
        cout << endl;
    }
}