#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *left,*right;
    node(int x){
        data = x;
        left = right = NULL;
    }
};
int ok;
void List(node* x){
    if(ok==0){
        return;
    }
    if(x){
        if((x->left == NULL && x->right) || (x->left && x->right == NULL)){
            ok=0;
            return;
        }
        if(x->left){
            List(x->left);
        }
        if(x->right){
            List(x->right);
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        unordered_map<int, node*> mp;
        int a,b;
        char c;
        cin >> a >> b >> c;
        node *tmp = new node(a);
        mp[a] = tmp;
        if(c=='L'){
            mp[a]->left = new node(b);
            mp[b] = mp[a]->left;
        }
        else{
            mp[a]->right = new node(b);
            mp[b] = mp[a]->right;
        }
        n -= 1;
        while(n--){
            int a,b; char c;
            cin >> a >> b >> c;
            if(c=='L'){
                mp[a]->left = new node(b);
                mp[b] = mp[a]->left;
            }
            else{
                mp[a]->right = new node(b);
                mp[b] = mp[a]->right;
            }
        }
        ok = 1;
        List(tmp);
        if(ok) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}   