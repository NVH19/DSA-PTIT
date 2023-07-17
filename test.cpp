#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
};
struct ds{
    node *left;
    node *right;
};
node *khoitao(int x){
    node *tmp = new node;
    tmp->data = x;
    tmp->next = NULL;
    return tmp;
}
void addsau(ds &l, node *x){
    if(l.left == NULL){
        l.left = l.right = x;
    }
    else{
        l.right->next = x;
        l.right = x;
    }
}
int main(){
    int n;
    cin >> n;
    ds a;
    a.left = NULL;
    a.right = NULL;
    for(int i=1; i<=n; i++){
        int x;
        cin >> x;
        node *tmp = khoitao(x);
        addsau(a,tmp);
    }
    int c;
    cin >> c;
    for(node *k = a.left; k != NULL; k = k->next){
        if(k->data != c){
            cout << k->data << " ";
        }
    }
}