#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* left; // is BT maxHeap or not...
    Node* right;
    Node(int v):val(v),left(NULL),right(NULL){}
};
bool isCBT(Node* root,int n){
    queue<Node*>q;
    q.push(root);
    int count=0;
    while(count<n){
        Node* temp = q.front();
        q.pop();
        count++;
        if(temp!=NULL){
            q.push(temp->left);
            q.push(temp->right);
        }
    }
    while(q.size()>0){
        Node* temp = q.front();
        if(temp!=NULL)return false;
        q.pop();
    }
    return true;
}
int numOfNodes(Node* root){
    if(root==NULL)return 0;
    return 1+numOfNodes(root->left)+numOfNodes(root->right);
}
bool MaxHeap(Node* root){
    if(root==NULL)return true;
    if(root->left!=NULL && root->val<root->left->val)return false;
    if(root->right!=NULL && root->val<root->right->val)return false;
    return MaxHeap(root->left) && MaxHeap(root->right);
}
int main(){
    Node* a = new Node(20);
    Node* b = new Node(15);
    Node* c = new Node(10);
    Node* d = new Node(8);
    Node* e = new Node(11);
    Node* f = new Node(6);
    Node* g = NULL;
    a->left = b;a->right = c;
    b->left = d;b->right = e;
    c->left = f;c->right = g;
    int n = numOfNodes(a);
    cout<<n<<endl;
    if(isCBT(a,n) && MaxHeap(a))cout<<"BT is maxHeap";
    else cout<<"BT is not a maxHeap";
    
}