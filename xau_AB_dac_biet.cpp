#include<bits/stdc++.h>
using namespace std;
int n,k,ok=1;
char a[1002];
void sinh(){
    int i=n;
    while(i>0 && a[i]=='B'){
        a[i]='A';
        i--;
    }
    if(i==0){
        ok=0;
    }
    else a[i]='B';
}
int check(char a[],int n, int k){
    int tmp=1,cnt=0;
    for(int i=1; i<=n-1; i++){
        if(a[i]=='A' && a[i+1]=='A'){
            tmp++;
            if(tmp==k){
                cnt++;
            }
            else if(tmp>k) return 0;
        }
        else{
            tmp=1;
        }
    }
    if(cnt==1) return 1;
    return 0;
}
int main(){
    cin >> n >> k;
    for(int i=1; i<=n; i++) a[i]='A';
    int dem=0,count=0;
    char b[1002][1002];
    while(ok){
        if(check(a,n,k)){
            count++;
            for(int i=1; i<=n; i++) b[dem][i]=a[i];
            dem++;
        }
        sinh();
    }
    cout << count << endl;
    for(int i=0; i<dem; i++){
        for(int j=1; j<=n; j++) cout << b[i][j];
        cout << endl;
    }
}