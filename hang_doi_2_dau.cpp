#include<bits/stdc++.h>
using namespace std;
int number1(string s){
    string tmp = s.substr(9);
    return stoi(tmp);
}
int number2(string s){
    string tmp = s.substr(10);
    return stoi(tmp);
}
int main(){
    int t;
    cin >> t;
    deque<int> q;
    string PB = "PUSHBACK", PF = "PUSHFRONT";
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        if(s.find(PB)<=s.size()){
            q.push_back(number1(s));
        }
        else if(s.find(PF)<=s.size()){
            q.push_front(number2(s));
        }
        else if(s=="PRINTFRONT"){
            if(!q.empty()) cout << q.front();
            else cout << "NONE";
            cout << endl;
        }
        else if(s=="POPFRONT"){
            if(!q.empty()) q.pop_front();
        }
        else if(s=="PRINTBACK"){
            if(!q.empty()) cout << q.back();
            else cout << "NONE";
            cout << endl;
        }
        else if(s=="POPBACK"){
            if(!q.empty()) q.pop_back();
        }
    }
}