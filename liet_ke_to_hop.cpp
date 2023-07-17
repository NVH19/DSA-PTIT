#include<bits/stdc++.h>
using namespace std;
int n,k,ok,a[1000],b[1000];
void sinh(){
    int i=k;
    while(i>0 && a[i]==n-k+i){
        i--;
    }
    if(i==0) ok=0;
    else{
        a[i]++;
        for(int j=i+1; j<=k; j++){
            a[j] = a[j-1] + 1;
        }
    }
}
int main(){
    int m;
    cin >> m >> k;
    set<int> s;
    for(int i=1; i<=m; i++){
        cin >> b[i];
        s.insert(b[i]);
    }
    vector<int> v;
    for(auto x : s){
        v.push_back(x);
    }
    // for(auto x : v) cout << x << " ";
    // cout << endl; 
    n = v.size();
    ok=1;
    for(int i=1; i<=k; i++) a[i]=i;
    while(ok){
        for(int i=1; i<=k; i++) cout << v[a[i]-1] << " ";
        cout << endl;
        sinh();
    }
}