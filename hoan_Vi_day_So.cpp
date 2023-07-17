#include <bits/stdc++.h>
using namespace std;
int n,ok,a[1002];
void sinh(){
    int i=n-1,j=n;
    while(i>0 && a[i]>a[i+1]) i--;
    if(i==0) ok=0;
    else{
        while(a[i]>a[j]) j--;
        swap(a[i],a[j]);
        reverse(a+i+1,a+n+1);
    }
}
int main()
{
   cin >> n;
   for(int i=1; i<=n; i++) cin >> a[i];
   sort(a+1,a+n+1);
   ok=1;
   while(ok){
       for(int i=1; i<=n; i++) cout << a[i] << " ";
       cout << endl; 
       sinh();
   }
}
