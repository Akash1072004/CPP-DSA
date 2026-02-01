#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* left; // convert BST to MaxHeap...
    Node* right;
    Node(int v):val(v),left(NULL),right(NULL){}
};
void printTree(Node* root){
    queue<Node*>q;
    q.push(root);
    while(q.size()>0){
        Node* temp = q.front();
        cout<<q.front()->val<<" ";
        q.pop();
        if(temp->left!=NULL)q.push(temp->left);
        if(temp->right!=NULL)q.push(temp->right);
    }
    cout<<endl;
}
void inorder(Node* root,vector<int>&v){
    if(root==NULL)return;
    inorder(root->right,v);
    v.push_back(root->val);
    inorder(root->left,v);
}
void preorder(Node* root,vector<int>&v,int &i){
    if(root==NULL)return;
    root->val = v[i++];
    preorder(root->left,v,i);
    preorder(root->right,v,i);
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(5);
    Node* c = new Node(16);
    Node* d = new Node(1);
    Node* e = new Node(8);
    Node* f = new Node(12);
    Node* g = new Node(20);
    a->left = b;a->right = c;
    b->left = d;b->right = e;
    c->left = f;c->right = g;
    printTree(a);
    vector<int>v;
    inorder(a,v);
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    cout<<endl;
    int i=0;
    preorder(a,v,i);
    printTree(a);
}