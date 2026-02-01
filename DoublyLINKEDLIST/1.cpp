#include<iostream>
using namespace std;
class Node{ // Concept of Doubly LinkedList...
    public:
    int val;
    Node* next;
    Node* pre;
    Node(int v): val(v),next(NULL),pre(NULL){}
};
void display(Node* head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head= head->next;
    }
    cout<<endl;
}
void displayRec(Node* head){//display list by recursion...
    if(head==NULL)return;
    cout<<head->val<<" ";
    displayRec(head->next);
}
void displayRecRev(Node* head){
    if(head==NULL)return;
    displayRecRev(head->next);
    cout<<head->val<<" ";
}
void displayByDoubly(Node* tail){ // display reverse by doubly linkedlist by "pre pointer"...
    while(tail!=NULL){
        cout<<tail->val<<" ";
        tail = tail->pre;
    }
    cout<<endl;
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;

    e->pre = d;
    d->pre = c;
    c->pre = b;
    b->pre = a;

    displayByDoubly(e);

}