#include<bits/stdc++.h>
using namespace std;
int n,k,ok,a[1000];
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        int tmp=0;
        for(int i=1; i<=k; i++) cin >> a[i];
        for(int i=1; i<=k; i++){
            if(a[i]==i) tmp++;
        }
        a[0]=0;
        if(tmp==k){
            for(int i=1; i<=k; i++) cout << n-k+i << " "; 
        }
        else{
            for(int i=k; i>=1; i--){
                if(a[i] != a[i-1]+1){
                    a[i]--;
                    if(a[k]!=n){
                        for(int j=i+1; j<=k; j++){
                            a[j]=n-k+j;
                        }
                    }
                    break;
                }
            }
            for(int i=1; i<=k; i++) cout << a[i] << " ";
        }
        cout << endl;
    }
}