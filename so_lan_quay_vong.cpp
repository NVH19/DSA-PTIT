#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long a[n+2];
        for(int i=0; i<n; i++) cin >> a[i];
        long long tmp = *max_element(a,a+n),ok;
        for(int i=0; i<n; i++){
            if(a[i]==tmp){
                ok =  i+1;
                break;
            }
        }
        if(a[n-1]==tmp){
            cout << 0;
        }
        else{
            cout << ok;
        }
        cout << endl;
    }
}