#include<bits/stdc++.h>
using namespace std;
int mi_n(string a,string b){
	if(a.find('6')!=a.size()){
		a[a.find('6')] = '5';
	}
	if(b.find('6') != b.size()){
		b[b.find('6')] = '5';
	}
	int s = stoi(a) + stoi(b);
	return s;
}
int main(){
	string a,b;
	cin >> a >> b;
	cout << mi_n(a,b);
}