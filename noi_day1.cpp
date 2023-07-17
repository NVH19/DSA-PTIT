#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+2];
        priority_queue<int, vector<int>, greater<int>> q;
        for(int i=0; i<n; i++){
            cin >> a[i];
            q.push(a[i]);
        }
        long long tong=0;
        while(q.size()>1){
            int m = q.top(); q.pop();
            int p = q.top(); q.pop();
            int sum = m+p;
            tong += sum; 
            q.push(sum);
        }
        cout << tong << endl;
    }
}