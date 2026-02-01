#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* left; 
    Node* right;
    Node(int v):val(v),left(NULL),right(NULL){}
};
void path(Node* root,string s){
    if(root==NULL)return;
    if(root->left==NULL && root->right==NULL){
        cout<<s+to_string(root->val)<<" ";
        return;
    }
    path(root->left,s+to_string(root->val));
    path(root->right,s+to_string(root->val));
}
int treeLevel(Node* root){
    if(root==NULL)return 0;
    return  1+max(treeLevel(root->left),treeLevel(root->right));
}
int main(){
    Node* a = new Node(1); 
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    path(a,"");
    
}