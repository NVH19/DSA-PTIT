#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> v(n+1,vector<int>(1,0));
    cin.ignore();
    for(int i=1; i<=n; i++){
        string s;
        getline(cin,s);
        stringstream ss(s);
        string tmp;
        while(ss >> tmp){
            v[i].push_back(stoi(tmp));
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<v[i].size(); j++){
            if(i<v[i][j]){
                cout << i << " " << v[i][j] << endl;
            }
        }
    }
}