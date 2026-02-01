#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int v){ // insert at start...
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
    void insertAtHead(int a){
        Node* temp = new Node(a);
        if(size==0)head=tail=temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
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
    ll.insertAtHead(10);
    ll.insertAtHead(20);
    ll.insertAtHead(30); // insert number from start...
    for(int i=40;i<=100;i=i+10){
        ll.insertAtHead(i);
    }
    ll.display();
   cout<< ll.size;
}