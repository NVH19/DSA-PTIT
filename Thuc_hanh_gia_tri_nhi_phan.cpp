#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin >> n >> q;
    int a[n+1]={0};
    while(q--){
        int x,y;
        cin >> x >> y;
        for(int i=x-1; i<y; i++){
            if(a[i]==1) a[i]=0;
            else if(a[i]==0) a[i]=1;
        }
    }
    for(int i=0; i<n; i++) cout << a[i] << " ";

}