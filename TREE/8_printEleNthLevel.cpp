#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* left; 
    Node* right;
    Node(int v):val(v),left(NULL),right(NULL){}
};
void preorder(Node* root,int level){
    if(root==NULL)return;
    if(level==1){
        cout<<root->val<<" "; // this condition print the ele of that level which i want...
        return;
    }
    preorder(root->left,level+1);
    preorder(root->right,level+1);
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
    preorder(a,0);
}