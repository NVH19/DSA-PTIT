#include<bits/stdc++.h>
using namespace std;
int n,start,a[1002][1002],b[1002];
int visited[1002];
void in(){
    for(int i=1; i<=n; i++){
        cout << b[i] << " ";
    }
    cout << b[1];
    cout << endl;
}
void way(int k){
    for(int i=1; i<=n; i++){
        if(a[b[k-1]][i]){
            if(k==n+1 && i==start){
                in();
            }
            else if(visited[i]==0){
                b[k]=i;
                visited[i]=1;
                way(k+1);
                visited[i]=0;
            }
        }
    }
}
int main(){
    cin >> n >> start;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j];
        }
    }
    memset(visited,0,sizeof(visited));
    visited[start]=1;
    b[1] = start;
    way(2);
}