#include<bits/stdc++.h>
using namespace std;
int a[1002][1002]={0};
int main(){
    int t;
    cin >> t;
    cin.ignore();
    for(int k=1; k<=t; k++){
        string s;
        getline(cin,s);
        stringstream ss(s);
        string tmp;
        while(ss >> tmp){
            int n = stoi(tmp);
            a[k][n] = a[n][k] = 1;
        }
        
    }
    
    for(int i=1; i<=t; i++){
        for(int j=1; j<=t; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}