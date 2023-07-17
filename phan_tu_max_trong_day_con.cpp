#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[n+3];
        multiset<int> s;
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<k; i++){
            s.insert(a[i]);
        }
        for(int i=0; i<n-k+1; i++){
            auto it1 = s.end();
            it1--;
            cout << *it1 << " ";
            auto it = s.find(a[i]);
            s.erase(it);
            s.insert(a[i+k]);
        }
        cout << endl;
    }
}