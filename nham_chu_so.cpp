#include<bits/stdc++.h>
using namespace std;
int max(string a){
    for(int i=0; i<a.size(); i++){
        if(a[i]=='5'){
            a[i]='6';
        }
    }
    return stoi(a);
}
int min(string b){
    for(int i=0; i<b.size(); i++){
        if(b[i]=='6'){
            b[i]='5';
        }
    }
    return stoi(b);
}
int main(){
    string a,b;
    cin >> a >> b;
    cout << min(a)+min(b) << " " << max(a)+max(b);
}