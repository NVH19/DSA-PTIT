#include<bits/stdc++.h>
using namespace std;
int result(int a[],int n,int k){
    
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k,a[1000],b[1000];
        cin >> n >> k;
        vector<int> v;
        for(int i=1; i<=k; i++){ cin >> a[i]; v.push_back(a[i]);
        }
        int i = k;
        while(i>0 && a[i]==n-k+i){
            i--;
        }
        if(i==0) cout << k;
        else{
            int dem=0;
            a[i]++;
            for(int j=i+1; j<=k; j++) a[j]= a[j-1]+1;
            for(int i=1; i<=k ;i++){
                if(!binary_search(v.begin(),v.end(),a[i])){
                    dem++;
                }
            }
            cout << dem;
        }
        cout << endl;
    }
}