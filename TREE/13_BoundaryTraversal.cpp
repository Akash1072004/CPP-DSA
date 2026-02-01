#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int v):val(v),left(NULL),right(NULL){}
};
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
        if(v[i]!=INT_MIN)l=new Node(v[i]);
        else l=NULL;
        if(j!=x && v[j]!=INT_MIN)r=new Node(v[j]);
        else r=NULL;
        temp->left=l;
        temp->right=r;
        if(l!=NULL)q.push(l);
        if(r!=NULL)q.push(r);
        i=i+2;
        j=j+2;
    }
    return root;
}
void display(Node* root){
    if(root==NULL)return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
void check(Node* root,int level,int lev){
    if(root==NULL)return;
    if(level==lev){
        cout<<root->val<<" ";
        return;
    }
    check(root->left,level+1,lev);
    check(root->right,level+1,lev);
}
void leftorder(Node* root){
    if(root==NULL)return;
    if(root->left==NULL && root->right==NULL)return;
    cout<<root->val<<" ";
    leftorder(root->left);
    if(root->left==NULL) leftorder(root->right);
}
int Level(Node* root){
    if(root==NULL)return 0;
    return 1+max(Level(root->left),Level(root->right));
}
void leaf(Node* root){
    if(root==NULL)return;
    if(root->left==NULL && root->right==NULL)cout<<root->val<<" ";
    leaf(root->left);
    leaf(root->right);
}
void rightorder(Node* root,int level){
    if(root==NULL)return;
    if(root->left==NULL && root->right==NULL)return;
    rightorder(root->right,level+1);
    if(root->right==NULL) rightorder(root->left,level+1);
    if(level!=1)cout<<root->val<<" ";
}
int main(){
    vector<int>v={1,2,3,4,5,INT_MIN,6,7,INT_MIN,8,INT_MIN,9,10,INT_MIN,11,INT_MIN,12,INT_MIN,13,INT_MIN,14,15,16,INT_MIN,17,INT_MIN,INT_MIN,18,INT_MIN,19,INT_MIN,INT_MIN,INT_MIN,20,21,22,23,INT_MIN,24,25,26,27,INT_MIN,INT_MIN,28,INT_MIN};
    Node* root = construct(v);
    int lev = Level(root);
    leftorder(root);
    cout<<endl;
    // for(int i=1;i<=lev;i++){
    //     check(root,1,i);
    //     cout<<endl;
    // }
    leaf(root);
    cout<<endl;
    rightorder(root,1);
}