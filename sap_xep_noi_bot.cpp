#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n+2];
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++){
        int ok = 0;
        for(int j=0; j<n-1; j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                ok = 1;
            }
        }
        if(ok==0) break;
        cout << "Buoc " << i+1 << ": ";
        for(int i=0 ;i<n; i++) cout << a[i] << " ";
        cout << endl;
    }
}