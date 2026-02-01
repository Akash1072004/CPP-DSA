#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int v):val(v),left(NULL),right(NULL){}
};
void displayTree(Node* root){
    if(root==NULL)return;
    cout<<root->val<<" ";
    displayTree(root->left);
    displayTree(root->right);
}
int size(Node* root){ 
    if(root==NULL)return 0;
    return 1+ size(root->left) + size(root->right);
}
int maxTree(Node* root){ // find max of the tree...
    if(root==NULL)return INT_MIN;
    return max(root->val,max(maxTree(root->left),maxTree(root->right)));
}
int main(){
    Node* a = new Node(1); 
    Node* b = new Node(2);
    Node* c = new Node(10);
    Node* d = new Node(4);
    Node* e = new Node(11);
    Node* f = new Node(6);
    Node* g = new Node(7);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    displayTree(a);
    cout<<endl;
    cout<<maxTree(a);
    
}