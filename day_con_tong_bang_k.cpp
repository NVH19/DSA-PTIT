#include<bits/stdc++.h>
using namespace std;
int n,ok,a[1000],b[1000];
void sinh(){
    int i=n;
    while(i>0 && a[i]==0){
        a[i]=1;
        i--;
    }
    if(i==0) ok=0;
    else a[i]=0;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int k;
        cin >> n >> k;
        for(int i=1; i<=n; i++) cin >> b[i];
        sort(b+1,b+n+1);
        ok=1;
        // memset(a,1,sizeof(a));
        for(int i=1; i<=n; i++) a[i]=1;
        int check=0;
        while(ok){
            int s=0;
            for(int i=1; i<=n; i++){
                s += a[i]*b[i];
            }
            if(s==k){
                check=1;
                cout << "[";
                int s1=0;
                for(int i=1; i<=n; i++){
                    s1 += a[i]*b[i];
                    if(a[i]==1){
                        if(s1==k) cout << b[i];
                        else
                            cout << b[i] << " ";
                    }
                }
                cout <<  "]";
                cout << " ";
            }
            sinh();
        }
        if(check==0) cout << -1;
        cout << endl;
    }
}