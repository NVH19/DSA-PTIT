#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        if(n<=9 ) cout << n;
        else{
            stack<int> s;
            int i=9;
            while(i>1 && n>1){
                while(n%i==0){
                    s.push(i);
                    n /= i;
                }
                i -= 1;
            }
            if(s.empty()) cout << -1;
            else{
                while(!s.empty()){
                    cout << s.top();
                    s.pop();
                }
            }
        }
        cout << endl;
    }
}