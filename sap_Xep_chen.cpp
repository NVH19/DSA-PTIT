#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n+2];
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++){
        int x = a[i], cnt = i-1;
        while(cnt>=0 && a[cnt] > x){
            a[cnt+1] = a[cnt];
            cnt--;
        }
        a[cnt+1] = x;
        cout << "Buoc " << i << ": ";
        for(int j=0; j<=i; j++) cout << a[j] << " ";
        cout << endl;
    }
}