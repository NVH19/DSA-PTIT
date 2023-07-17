#include<bits/stdc++.h>
using namespace std;
// int n,x[100],cot[100],xuoi[100],nguoc[100];
// int a[100][100];
// void in(){
//     memset(a,0,sizeof(a));
//     for(int i=1; i<=n; i++){
//         a[i][x[i]]=1;
//     }
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             cout << a[i][j];
//         }
//         cout << endl;
//     }
//     cout << endl;
// }
// void Try(int i){
//     for(int j=1; j<=n; j++){
//         if(cot[j]==1 && xuoi[i-j+n]==1 && nguoc[i+j-1]==1){
//             x[i]=j;
//             cot[j]=0; xuoi[i-j+n]=0 ; nguoc[i+j-1]=0;
//             if(i==n){
//                 in();
//             }
//             else{
//                 Try(i+1);
//             }
//             cot[j]=1; xuoi[i-j+n]=1 ; nguoc[i+j-1]=1;
//         }
//     }
// }
// int main(){
//     cin >> n;
//     for(int i=1; i<=99; i++){
//         cot[i]=1;xuoi[i]=1;nguoc[i]=1;
//     }
//     Try(1);
// }
int n,x[100],cot[100],xuoi[100],nguoc[100];
int a[100][100];
int cnt=0;
void in(){
    memset(a,0,sizeof(a));
    for(int i=1; i<=n; i++) a[i][x[i]]=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << a[i][j];
        }
        cout << endl;
    }
    cout << endl;
}
void Try(int i){
    for(int j=1; j<=n; j++){
        if(cot[j] && xuoi[i-j+n] && nguoc[i+j-1]){
            x[i]=j; 
            cot[j]=xuoi[i-j+n]=nguoc[i+j-1]=0;
            if(i==n) cnt++;
            else Try(i+1);
            cot[j]=xuoi[i-j+n]=nguoc[i+j-1]=1;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=1; i<=2*n; i++) cot[i]=xuoi[i]=nguoc[i]=1;
        Try(1);
        cout << cnt << endl;
        cnt=0;
    }
}