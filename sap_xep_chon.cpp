#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n+2];
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n-1; i++){
        int tmp=i;
        for(int j=i+1; j<n; j++){
            if(a[j]<a[tmp]){
                tmp = j;
            }
        }
        swap(a[i],a[tmp]);
        cout << "Buoc " << i+1 << ": ";
        for(int i=0; i<n; i++) cout << a[i] << " ";
        cout << endl;
    }
}