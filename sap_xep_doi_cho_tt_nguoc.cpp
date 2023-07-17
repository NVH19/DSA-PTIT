#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+2];
        for(int i=0; i<n; i++) cin >> a[i];
        int b[n+2][n+2];
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(a[i]>a[j]) swap(a[i],a[j]);
            }
            for(int j=0; j<n; j++){
                b[i][j] = a[j];
            }
        }
        for(int i=n-2; i>=0; i--){
            cout << "Buoc " << i+1 << ": ";
            for(int j=0; j<n; j++){
                cout << b[i][j] << " ";
            }
            cout << endl;
        }
    }
}