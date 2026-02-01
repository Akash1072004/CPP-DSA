#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int v):val(v),next(NULL){}
};
class Queue{
public:
    Node* head;
    Node* tail;
    int s;
    Queue():head(NULL),tail(NULL),s(0){}
    void push(int val){
        Node* newNode = new Node(val);
        if(head==NULL)head=tail=newNode;
        else {
            tail->next = newNode;
            tail = newNode;
        }
        s++;
    }
    void pop(){
        Node* temp = head;
        if(head==NULL){
            cout<<"queue is empty";
            return;
        }
        else head = head->next;
        s--;
        delete(temp);// there is not any wastage of space , it delete the head...
    }
    int front(){
        if(head==NULL){
            cout<<"queue is empty";
            return -1;
        }
        return head->val;
    }
    int back(){
        if(head==NULL){
            cout<<"queue is empty";
            return -1;
        }
        return tail->val;
    }
    int size(){
        return s;
    }
    bool empty(){
        if(head==NULL)return true;
        else return false;
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
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.size()<<endl;
    cout<<q.front()<<endl; 
    cout<<q.empty()<<endl;
    cout<<q.back()<<endl;
    q.display();

}