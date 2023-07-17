#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n+2],b[n+2];
    for(int i=0; i<n; i++){
        cin >> a[i];
        b[a[i]] = 1;
    }
    int sum=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            if(a[i] > a[j]){
                b[a[i]] = max(b[a[i]],b[a[j]]+1);
            }
        }
        sum = max(sum,b[a[i]]);
    }
    cout << sum << endl;
}