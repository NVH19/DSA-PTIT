#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+2],b[n+2][n+2];
        int dem=0;
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++){
            int ok=1;
            for(int j=0; j<n-1; j++){
                if(a[j] > a[j+1]){
                    swap(a[j],a[j+1]);
                    ok=0;
                }
            }
            if(ok) break;
            for(int j=0; j<n; j++){
                b[i][j] = a[j];
            }
            dem++;
        }
        for(int i=dem-1; i>=0; i--){
            cout << "Buoc " << i+1 << ": ";
            for(int j=0; j<n; j++) cout << b[i][j] << " ";
            cout << endl;
        }
    }
}