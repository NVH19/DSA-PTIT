#include<bits/stdc++.h>
using namespace std;
int n,a[15],cnt,ok;
void sinh(){
    int i=cnt;
    while(i>=1 && a[i]==1){
        i--;
    }
    if(i==0) ok=1;
    else{
        int d = cnt-i+1;
        a[i]--;
        cnt = i;
        int q = d/a[i],r=d%a[i];
        if(q){
            for(int j=1; j<=q; j++){
                a[j+i]=a[i];
            }
            cnt += q;

        }
        if(r!=0){
            cnt++;
            a[cnt] = r;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        ok=0;
        cnt=1;a[1]=n;
        vector<vector<int>> v;
        while(!ok){
            vector<int> tmp(a+1,a+cnt+1);
            v.push_back(tmp);
            sinh();
        }
        cout << v.size() << endl;
        for(auto it:v){
            cout << "(";
            for(int i=0; i<it.size(); i++){
                cout << it[i];
                if(i<it.size()-1) cout << " ";
            }
            cout << ")" << " ";
        }
        cout << endl;
    }
}