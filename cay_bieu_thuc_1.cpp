#include<bits/stdc++.h>
using namespace std;
struct node{
    char data;
    node *left,*right;
    node(char x){
        data = x;
        left = right = NULL;
    }
};
void in(node* x){
    if(x!=NULL){
        in(x->left);
        cout << x->data << " ";
        in(x->right);
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack<node*> st;
        node* root = NULL;
        for(int i=0; i<s.size(); i++){
            if(!isalpha(s[i])){
                root = new node(s[i]);
                root->right = st.top(); st.pop();
                root->left = st.top(); st.pop();
                st.push(root);
            }
            else{
                st.push(new node(s[i]));
            }
        }
        in(st.top());
        cout << endl;
    }
}