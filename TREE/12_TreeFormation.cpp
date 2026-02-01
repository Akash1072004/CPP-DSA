#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int v):val(v),left(NULL),right(NULL){}
};
void display(Node* root){
    if(root==NULL)return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
Node* construct(vector<int>&v){
    int x = v.size();
    int i=1,j=2;
    queue<Node*>q;
    Node* root = new Node(v[0]);
    q.push(root);
    while(q.size()>0 && i<x){
        Node* temp = q.front();
        q.pop();
        Node* l;
        Node* r;
        if(v[i]!=INT_MIN) l = new Node(v[i]);
        else l = NULL;
        if(j!=x && v[j]!=INT_MIN) r = new Node(v[j]);
        else r = NULL;
        temp->left = l;
        temp->right = r;
        if(l!=NULL)q.push(l);
        if(r!=NULL)q.push(r);
        i+=2;
        j+=2;
    }
    return root;
}
int main(){
    vector<int>v={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,9};
    Node* root = construct(v);
    display(root);
}