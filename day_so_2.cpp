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
        int m=n;
        int b[n+1][n+1];
        int k=0;
        while(n>0){
            for(int i=0; i<n; i++){
                b[k][i] = a[i];
            }
            for(int i=0; i<n-1; i++){
                a[i] = a[i] + a[i+1];
            }
            n--;
            k++;
        }
        for(int i=k-1; i>=0; i--){
            cout << "[";
            for(int j=0; j<k-i-1;j++) cout << b[i][j] << " ";
            cout << b[i][k-i-1];
            cout << "]";
            cout << " ";
        }
        cout << endl;
    }
}