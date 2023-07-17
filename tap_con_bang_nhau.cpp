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
        int sum = accumulate(a,a+n,0);
        int tong = sum/2;
        int check[10002]={0};
        check[0]=1;
        if(sum%2!=0) cout << "NO";
        else{
            for(int i=0; i<n; i++){
                for(int j=tong; j>=a[i]; j--){
                    if(check[j-a[i]])
                        check[j]=1;
                }
            }
            if(check[tong]){
                cout << "YES";
            }
            else cout << "NO";
        }
        cout << endl;
    }
}