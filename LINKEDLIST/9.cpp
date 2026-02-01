#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int v){ // insert the value at any index...
        val=v;
        next=NULL;
    }
};
class Linkedlist{
    public:
    Node* head;
    Node* tail;
    int size;

    Linkedlist(){
        head=tail=NULL;
        size=0;
    }
    void insertAtEnd(int a){
        Node* temp = new Node(a);
        if(size==0)head=tail=temp;
        else {
            tail->next = temp;
        tail = temp;
        }
        size++;
    }
    void insertAtHead(int a){
        Node* temp = new Node(a);
        if(size==0)head=tail=temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void insertAtIdx(int idx,int y){
        if(idx<0 || idx>size)return;
        Node* temp = new Node(y);
        if(idx==0)insertAtHead(y);
        else if(idx==size)insertAtEnd(y);
        else {
        Node* t = head;
        for(int i=0;i<idx-1;i++){
            t = t->next;
        }
        temp->next = t->next;
        t->next = temp;
        size++;
        }
    }
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};    
int main(){
    Linkedlist ll;
    ll.insertAtEnd(10);
    ll.insertAtEnd(20);
    ll.insertAtEnd(30); 
    ll.insertAtHead(40);

    int x,y;
    cout<<"In which idx you want to insert : ";
    cin>>x;
    cout<<"what's the number you want to insert : ";
    cin>>y;
    ll.insertAtIdx(x,y);

    ll.display();
    
}