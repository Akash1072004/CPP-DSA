#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
  int val;
  Node* left;
  Node* right;
  Node (int v):val(v),left(NULL),right(NULL){}  
};
void display(Node* root,int lev,int l){
    if(root==NULL)return;
    if(lev==l)cout<<root->val<<" ";
    display(root->left,lev+1,l);
    display(root->right,lev+1,l);
}
Node* constructTree(vector<int>&v){
    int x = v.size();
    int i=1,j=2;
    Node* root = new Node(v[0]);
    queue<Node*>q;
    q.push(root);
    while(q.size()>0 && i<x){
        Node* temp = q.front();
        q.pop();
        Node* l;
        Node* r;
        if(v[i]!=INT_MIN)l = new Node(v[i]);
        else l = NULL;
        if(j!=x && v[j]!=INT_MIN)r = new Node(v[j]);
        else r = NULL;
        temp->left = l;
        temp->right= r;
        if(l!=NULL)q.push(l);
        if(r!=NULL)q.push(r);
        i+=2;
        j+=2;
    }
    return root;
}
int level(Node* root){
    if(root==NULL)return 0;
    return 1+max(level(root->left),level(root->right));
}
void topview(Node* root){
    unordered_map<int,int>map;
    queue<pair<Node*,int>>q;
    pair<Node*,int>p;
    p.first = root;
    p.second = 0;
    q.push(p);
    while(q.size()>0){
        Node* temp = (q.front()).first;
        int level = (q.front()).second;
        q.pop();
        if(map.find(level)==map.end()){
            map[level]=temp->val;
        }
        if(temp->left!=NULL){
            pair<Node*,int>p1;
            p1.first = temp->left;
            p1.second = level-1;
            q.push(p1);
        }
        if(temp->right!=NULL){
            pair<Node*,int>p2;
            p2.first = temp->right;
            p2.second = level+1;
            q.push(p2);
        }
    }
    int minLevel = INT_MAX;
    int maxLevel = INT_MIN;
    for(auto ele : map){
        int level = ele.first;
        minLevel = min(level,minLevel);
        maxLevel = max(level,maxLevel);
    }
    for(int i=minLevel;i<=maxLevel;i++){
        cout<<map[i]<<" ";
    }
}
int main(){
    vector<int>v={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8};
    Node* root = constructTree(v);
    int lev = level(root);
    for(int i=0;i<lev;i++){
        display(root,0,i);
        cout<<endl;
    }
    cout<<endl;
    topview(root);
}