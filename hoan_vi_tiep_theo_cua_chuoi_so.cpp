#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int l = s.size();
        int a[100];
        cout << n << " ";
        for(int i=0; i<l; i++){
            a[i+1] = s[i]-'0'; 
        }
        int i = s.size()-1, j=l;
        while(i>0 && a[i]>=a[i+1]){
            i--;
        }
        if(i==0) cout << "BIGGEST";
        else{
            while(a[i]>=a[j]){
                j--;
            }
            swap(a[i],a[j]);
            reverse(a+i+1,a+l+1);
            for(int m=1; m<=l; m++) cout << a[m];
        }
        cout << endl;
    }
}