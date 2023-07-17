#include<bits/stdc++.h>
using namespace std;
int n,k,ok,a[1000];
void sinh(){
    int i=k;
    while(i>0 && a[i]==n-k+i){
        i--;
    }
    if(i==0) ok=0;
    else{
        a[i]++;
        for(int j=i+1; j<=k; j++) a[j]=a[j-1]+1;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int h,c;
        cin >> h >> c;
        int b[h+1][c+1];
        for(int i=1; i<=h; i++){
            for(int j=1; j<=c; j++){
                cin >> b[i][j];
            }
        }
        k=h-1;
        n=h+c-2;
        ok=1;
        int dem=0;
        for(int i=1; i<=k; i++) a[i]=i;
        while(ok){
            dem++;
            sinh();
        }
        cout << dem << endl;
    }
}