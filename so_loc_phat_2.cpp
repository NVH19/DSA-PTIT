#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        queue<string> q;
        q.push("6"); q.push("8");
        vector<string> v;
        while(!q.empty()){
            string tmp = q.front();
            q.pop();
            if(tmp.size()==n+1){
                break;
            }
            v.push_back(tmp);
            q.push(tmp+"6");
            q.push(tmp+"8");
        }
        cout << v.size() << endl;
        for(auto x : v){
            cout << x << " ";
        }
        cout << endl;
    }
}