#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int v){
        val = v;
        next = NULL;
    }
};
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);

    a->next = b;
    b->next = c;
    c->next = d;
    // d->next = NULL; no need to do it...

    //print linkedlist...
    Node* temp = a;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }

    // we can easily print the value of d with the help of this method...
    cout<<endl<<"d = "<<a->next->next->next->val;
}