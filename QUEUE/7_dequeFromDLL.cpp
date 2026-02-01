#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* pre;
    Node(int v):val(v),next(NULL),pre(NULL){}
};
class Deque{
    public:
    Node* head;
    Node* tail;
    int s;
    Deque():head(NULL),tail(NULL),s(0){}
    void pushBack(int v){
        Node* newNode = new Node(v);
        if(head==NULL)head=tail=newNode;
        else {
            tail->next = newNode;
            newNode->pre = tail;
            tail=newNode;
        }
        s++;
    }
    void pushFront(int v){
        Node* newNode = new Node(v);
        if(head==NULL)head=tail=newNode;
        else {
            newNode->next = head;
            head->pre = newNode;
            head = newNode;
        }
        s++;
    }
    int getFront(){
        if(head==NULL){
            cout<<"queue is empty";
            return -1;
        }
        return head->val;
    }
    int getBack(){
        if(head==NULL){
            cout<<"queue is empty";
            return -1;
        }
        return tail->val;
    }
    void deleteFront(){
        if(head==NULL){
            cout<<"queue is empty";
            return;
        }
        else {
            Node* temp = head;
            head=head->next;
        }
        s--;
    }
    void deleteBack(){
        if(head==NULL){
            cout<<"queue is empty";
            return;
        }
        else {
            Node* temp = tail;
            tail=tail->pre;
        }
        tail->next = NULL;
        s--;
    }
    int size(){
        return s;
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
    Deque dq;
    dq.pushBack(10);
    dq.pushBack(20);
    dq.pushBack(30);
    dq.pushBack(40);
    dq.pushBack(50);
    cout<<dq.getBack()<<endl;
    cout<<dq.getFront()<<endl;
    dq.display();
    cout<<dq.size()<<endl;
    dq.deleteBack();
    dq.display();
    cout<<dq.size()<<endl;
    dq.deleteFront();
    dq.display();
    cout<<dq.size()<<endl;
    cout<<dq.getBack()<<endl;
    cout<<dq.getFront()<<endl;
    dq.pushBack(90);
    dq.pushFront(100);
    dq.display();

}