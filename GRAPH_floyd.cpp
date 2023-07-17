#include<bits/stdc++.h>
using namespace std;
int a[1002][1002],n,parent[1002][1002];
int MaX=13900;
int res[1003][1002];
void Floyd(){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(a[i][j]!=0){
                res[i][j]=a[i][j];
                parent[i][j]=j;
            }
            else{
                res[i][j] = MaX;
                parent[i][j]=-1;
            }
            res[i][i]=0;
        }
    }
    for(int k=1; k<=n; k++){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(res[i][j] > res[i][k] + res[k][j]){
                    res[i][j] = res[i][k] + res[k][j];
                    parent[i][j]= parent[i][k];
                }
            }
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << "K/c " << i << " -> " << j << " = " << res[i][j] << ";";
            //vector<int> v;
            cout << i;
            int tmp=i;
            while(tmp != j){
                cout << " --> " << parent[tmp][j];
                tmp = parent[tmp][j];
            }
          
            // reverse(v.begin(),v.end());
            // for(auto x : v){
            //     cout << " --> " << x;
            // }
            cout << endl;
        }
        cout << endl;
    }
}
int main(){
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j];
        }
    }
    Floyd();
}