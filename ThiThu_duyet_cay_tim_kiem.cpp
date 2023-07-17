#include<bits/stdc++.h>
using namespace std;
// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
//         int a[n+2];
//         for(int i=1; i<=n; i++){
//             cin >> a[i];
//         }
//         for(int i=1; i<=n; i++){
//             cout << a[i] << " ";
//         }
//         cout << endl;
//     }
// }
struct node{
    int data;
    node *next;
};
struct ds{
    node *left;
    node *right;
};
node *tao(int x){
    node *tmp = new node;
    tmp->data = x;
    tmp->next = NULL;
    return tmp;
}
void add(ds &l, node *x){
    if(l.left == NULL){
        l.left = l.right = x;
    }
    else{
        l.right->next = x;
        l.right = x;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ds a;
        a.left = a.right = NULL;
        for(int i=0; i<n; i++){
            int tmp;
            cin >> tmp;
            node *x = tao(tmp);
            add(a,x);
        }
        for(node *b = a.left; b != NULL; b = b->next){
            cout << b->data << " ";
        }
        cout << endl;
    }
}