#include<bits/stdc++.h>
using namespace std;
void tele(int n, char a, char b){
    cout << a << " -> " << b << endl;
}
void thap(int n, char a, char b, char c){
    if(n==1){
        tele(1, a, c);
    }
    else{
        thap(n-1, a, c, b);
        tele(n, a, c);
        thap(n-1, b, a, c);
    }
}
int main(){
    int n;
    cin >> n;
    char a='A',b='B',c='C';
    thap(n,a,b,c);
}