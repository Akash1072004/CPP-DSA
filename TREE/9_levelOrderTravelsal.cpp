#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* left; 
    Node* right;
    Node(int v):val(v),left(NULL),right(NULL){}
};
void preorder(Node* root,int l,int level){
    if(root==NULL)return;
    if(level==l){
        cout<<root->val<<" "; // this condition print the ele of that level which i want...
        return;
    }
    preorder(root->left,l,level+1);
    preorder(root->right,l,level+1);
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
    int l = treeLevel(a);
    for(int i=0;i<l;i++){
        preorder(a,i,0);
        cout<<endl;
    }
}