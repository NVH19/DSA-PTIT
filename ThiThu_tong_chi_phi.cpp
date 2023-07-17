#include<bits/stdc++.h>
using namespace std;
int sum(int a[],int n, int m){
    int s=0;
    for(int i=n; i<m; i++){
        s+=a[i];
    }
    return s;
}
int main(){
    int n,k;
    cin >> n >> k;
    int a[n+2];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a,a+n);
    queue<int> q;
    for(int i=0; i<n; i++){
        q.push(a[i]);
    }
    int tmp=n,j=0,tong=0;
    while(q.size()!=1){
        vector<int> v;
        while(k--){
            if(!q.empty()){
                v.push_back(q.front());
                q.pop();
            }
        }
        tong += v[v.size()-1] - v[0];
        int s=0;
        for(int i=0; i<v.size(); i++){
            s += v[i];
        }
        q.push(s);
    }
    cout << q.front() << endl;
    cout << tong;
}