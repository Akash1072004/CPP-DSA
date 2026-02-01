#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int v){ // delete the element from linkedlist at any idx...
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
    void find(int idx){ 
        Node* temp = head;
        for(int i=0;i<idx;i++){
            temp = temp->next;
        }
        cout<<temp->val;
    }
    void deleteAtHead(){
        if(size==0)return;
        else {
            Node* temp = head;
            head = temp->next;
            size--;
        }
    }
    void deleteAtTail(){
        if(size==0)return;
        else {
            Node* temp = head;
            while(1){
                if(temp->next->next==NULL)break; // we can also write "temp->next==tail"...
                else temp = temp->next;
            }
            temp->next=NULL;
            tail=temp;
            size--;
        }
    }
    void deleteAtIdx(int idx){ // this function is used to delete any idx...
        if(size==0)return;
        else if(idx==0)deleteAtHead();
        else if(idx==size-1)deleteAtTail();
        else {
            Node* temp = head;
            for(int i=0;i<idx-1;i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
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

    int idx;
    cout<<"which idx you want to delete : ";
    cin>>idx;
    ll.display();
    ll.deleteAtIdx(idx);
    ll.display();
    
}