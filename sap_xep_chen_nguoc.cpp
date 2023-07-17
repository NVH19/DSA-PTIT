#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n+2],b[n+2][n+2];
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++){
        int x = a[i], pos = i-1;
        while(pos>=0 && a[pos] > x){
            a[pos + 1] = a[pos];
            pos--;
        }
        a[pos+1] = x;
        for(int j=0; j<=i; j++){
            b[i][j] = a[j];
        }
    }
    for(int i=n-1; i>=0; i--){
        cout << "Buoc " << i << ": ";
        for(int j=0; j<=i; j++){
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}