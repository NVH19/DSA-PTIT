#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int q;
        cin >> q;
        queue<int> qu;
        while(q--){
            int n;
            cin >> n;
            switch(n){
                case 1:
                    cout << qu.size() << endl;
                    break;
                case 2:
                    if(qu.empty()) cout << "YES" << endl;
                    else cout << "NO" << endl;
                    break;
                case 3:
                    int so;
                    cin >> so;
                    qu.push(so);
                    break;
                case 4:
                    if(!qu.empty()){
                        qu.pop();
                    }
                    break;
                case 5:
                    if(!qu.empty()) cout << qu.front();
                    else cout << -1;
                    cout << endl;
                    break;
                case 6:
                    if(!qu.empty()) cout << qu.back();
                    else cout << -1;
                    cout << endl;
                    break; 
            }
        }
    }
}