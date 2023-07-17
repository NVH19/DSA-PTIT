#include<bits/stdc++.h>
using namespace std;
int number(string s){
    string tmp = s.substr(5);
    return stoi(tmp);
}
int main(){
    int t;
    cin >> t;
    queue<int> q;   
    string day = "PUSH", in = "PRINTFRONT" , vut = "POP";
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        if(s.find(day)<=s.size()){
            q.push(number(s));
        }
        else if(s==in){
            if(!q.empty()) cout << q.front();
            else cout << "NONE";
            cout << endl;
        }
        else if( s==vut){
            if(!q.empty()) q.pop();
        }
    }
}