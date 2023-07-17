#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+2];
        int dem=0;
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n-1; i++){
            int tmp=i;
            int ok=0;
            for(int j=i+1; j<n; j++){
                if(a[tmp]>a[j]){
                    tmp = j;
                    ok=1;
                }
            }
            if(ok){
                swap(a[i],a[tmp]);
                dem++;
                // for(int i=0; i<n; i++) cout << a[i] << " ";
                // cout << endl;
            }
        }
        cout << dem << endl;
    }
}