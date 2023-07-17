#include<bits/stdc++.h>
using namespace std;
int MAX = 1e9;
int n,start;
int a[1002][1002];
int father[1002];
void dijkstra(){
    vector<long long> res(n+1,MAX);
    res[start] = 0;
    priority_queue<pair<int,int> , vector<pair<int,int>>, greater<pair<int,int>>> q;
    q.push({0,start});
    while(!q.empty()){
        pair<int,int> tmp = q.top();
        q.pop();
        int d = tmp.first;
        int dinh = tmp.second;
        for(int i=1; i<=n; i++){
            if(a[dinh][i]!=0){
                if(res[i] > res[dinh] + a[dinh][i]){
                    res[i] = res[dinh] + a[dinh][i];
                    q.push({res[i],i});
                    father[i] = dinh;
                }
            }
        }
    }
    father[start]=start;
    for(int i=1; i<=n; i++){
        if(res[i]==MAX){
            cout << "K/c " << start << " -> " << i << " = " << "INF" << ";";
        }
        else{
            cout << "K/c " << start << " -> " << i << " = " << res[i] << ";     ";
            int tmp = i;
            cout <<  i << " <- ";
            while(father[tmp]!=start){
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
    dijkstra();
}