#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        queue<string> q;
        q.push("9");
        int ok=0;
        while(!q.empty()){
            string tmp = q.front();
            q.pop();
            if(stoll(tmp)%n==0){
                cout << tmp;
                break;
            }
            else{
                q.push(tmp + "0");
                q.push(tmp + "9");
            }
        }
        cout << endl;
    }
}