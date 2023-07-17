#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a[10]={1,2,5,10,20,50,100,200,500,1000};
        int n;
        cin >> n;
        int i=9;
        int dem=0;
        while(n>0){
            if(n>=a[i]){
                int tmp= n/a[i];
                n = n % a[i];
                dem += tmp;
            }
            else{
                i--;
            }
        }
        cout << dem << endl;
    }

}