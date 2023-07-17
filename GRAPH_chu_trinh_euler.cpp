#include<iostream>
#include<stack>
using namespace std;
int n,a[1002][1002],start;
void way(){
    stack<int> q,res;
    q.push(start);
    while(!q.empty()){
        int s = q.top();
        int ok=1;
        for(int i=1; i<=n; i++){
            if(a[s][i]==1){
                q.push(i);
                a[s][i]=0;a[i][s]=0;
                ok=0;
                break;
            }
        }
        if(ok){
            q.pop();
            res.push(s);
        }
    }
    while(!res.empty()){
        int x = res.top();
        cout << x << " ";
        res.pop();
    }
}
int main(){
    cin >> n >> start;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j];
        }
    }
    way();
}