#include<bits/stdc++.h>
using namespace std;
int n,start, a[1002][1002],father[1002];
int Max=10004;

void Bellman(){
    vector<int> res(n+1,Max);
    res[start]=0;
    father[start]=start;
    for(int i=1; i<=n-2; i++){
        int ok=1;
        for(int j=1; j<=n; j++){
            for(int k=1; k<=n ; k++){
                if(a[k][j]!=0){
                    if(res[k] + a[k][j] < res[j]){
                        res[j] = res[k] +  a[k][j];
                        father[j]=k;
                        ok=0;
                    }
                }
            }    
        }
        if(ok){
            break;
        }
    }
    for(int i=1; i<=n; i++){
        if(res[i]==Max){
            cout << "K/c " << start << " -> " << i  << " = ";
            cout << "INF;";
        }
        else{
            cout << "K/c " << start << " -> " << i  << " = " << res[i] << ";       ";
            int tmp = i;
            cout << i << " <- ";
            while(father[tmp] != start){
                cout << father[tmp] << " <- ";
                tmp = father[tmp];
            }
            cout << start;
        }
        cout << endl;
    }
}
int main(){
    cin >> n >> start;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j];
        }
    }
    Bellman();
}