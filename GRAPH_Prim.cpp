#include<bits/stdc++.h>
using namespace std;
int n, start, a[1002][1002], visited[1002];
// int cmp(tuple<int,int,int> a, tuple<int,int,int> b){
//     if(get<2>(a) == get<2>(b))
//         return get<0>(a) < get<0>(b);
//     return get<2>(a) < get<2>(b);
// }
int main(){
    cin >> n >> start;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j];
        }
    }
    memset(visited,0,sizeof(visited));
    visited[start]=1;
    vector<pair<int,int>> res;
    int dH = 0;
    int edges = 0;
    while(edges < n-1){
        int m_in = INT_MAX;
        int r=start,c=start;
        for(int i=1; i<=n; i++){
            if(visited[i]){
                for(int j=1; j<=n; j++){
                    if(m_in > a[i][j]){
                        if(!visited[j] && a[i][j]){
                            m_in = a[i][j];
                            r = i;
                            c = j;
                        }
                    }
                }
            }
        }
        dH += a[r][c];
        res.push_back({min(r,c), max(r,c)});
        visited[c] = 1;
        edges++;
    }
    cout << "dH = " << dH << endl;
    for(auto x : res){
        cout << x.first << " " << x. second << endl;
    }
}