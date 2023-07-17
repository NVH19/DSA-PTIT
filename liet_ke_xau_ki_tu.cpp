#include<bits/stdc++.h>
using namespace std;
char c,a[10002];
int n;
void Try(int i, char d){
    for(char j=d; j<=c; j++){
        a[i] = j;
        if(i==n){
            for(int k=1; k<=n; k++){
                cout << a[k];
            }
            cout << endl;
        }
        else Try(i+1,j);
    }
}
int main(){
    cin >> c >> n;
    Try(1,'A');
}