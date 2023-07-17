#include<bits/stdc++.h>
using namespace std;
int number(string s){
    string s1 = s.substr(5);
    return stoi(s1);
}
int main(){
    stack<int> st;
    string a="push";
    string b="pop";
    string c="show";
    while(1){
        string s;
        getline(cin,s);
        if(s.find(a)<=s.size()){
            st.push(number(s));
        }
        else if(s.find(b)<=s.size()){
            st.pop();
        }
        else if(s.find(c)<=s.size()){
            vector<int> v;
            while(!st.empty()){
                v.push_back(st.top());
                st.pop();
            }
            for(int i=v.size()-1;i>=0; i--){
                cout << v[i] << " ";
                st.push(v[i]);
            }
            cout << endl;
        }
        if(st.empty()){
            cout << "empty";
            break;
        }
    }
}