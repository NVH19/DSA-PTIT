#include<bits/stdc++.h>
using namespace std;
int n,m,ok;
// void sinh(){
//     int i=n-1,j=n;
//     while(a[i] > a[i+1] && i>=1){
//         i--;
//     } 
//     if(i==0){
//         ok=0;
//     }
//     else{
//         while(a[i] >= a[j]){
//             j--;
//         }
//         swap(a[i],a[j]);
//         reverse(a+1,a+n+1);
//     }
// }
int main(){
    cin >> n >> m;
    int a[n+2];
    for(int i=0; i<n; i++){
        a[i] = i+1;
    }
    int ok=1;
    // while(ok){
    //     for(int i=1; i<=n; i++){
    //         cout << a[i] << " ";
    //     }
    //     cout << endl;
    //     sinh();
    // }
    int cnt=1;
    while(next_permutation(a,a+n)){
        cnt++;
       if(cnt%m==0){
            for(int i=0; i<n; i++){
                cout << a[i] << " ";
            }
            cout << endl;
       }
        
    }
}