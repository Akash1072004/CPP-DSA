#include<iostream>
using namespace std;
class ListNode{ // Concept of Doubly LinkedList...
    public:
    int val; // clear the doubt of user taking input...
    ListNode* next;
    ListNode* pre;
    ListNode(int v): val(v),next(NULL),pre(NULL){}
};
void insertAtEnd(ListNode* &head,ListNode* &tail,int x){
    ListNode* newNode = new ListNode(x);
    if(head==NULL){
        head=tail=newNode;
    }
    else {
        tail->next = newNode;
        newNode->pre=tail;
        tail=newNode;
    }
    tail->next = NULL;
}
void insertAtHead(ListNode* &head,ListNode* &tail,int x){
    ListNode* newNode = new ListNode(x);
    if(head==NULL){
        head=tail=newNode;
    }
    else {
        head->pre = newNode;
        newNode->next = head;
        head = newNode;
    }
}
void insertAtIdx(ListNode* &head,ListNode* &tail,int x,int idx){
    ListNode* newNode = new ListNode(x);
    ListNode* temp = head;
     int size = 0;
      while(temp!=NULL){
            size++;
            temp=temp->next;
        }
    if(idx==0)insertAtHead(head,tail,x);
    else if(idx==size)insertAtEnd(head,tail,x);
    else {
            temp = head;
            for(int i=1;i<idx;i++){
                temp=temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
            newNode->pre = temp;
            newNode->next->pre = newNode;
    }
}
void display(ListNode* head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main(){
    ListNode* head = NULL;
    ListNode* tail = NULL;
    int x;
    cout<<"enter the number of elements : ";
    cin>>x;
    int v;
    for(int i=0;i<x;i++){
        cin>>v;
        insertAtEnd(head,tail,v);
    }
    // tail->next = NULL;
    cout<<"your LinKedList"<<endl;
    display(head);
    string s;
    cout<<"Do you want to insert at any Idx : ";
    cin>>s;
    int y;
    int f;
    if(s=="yes"){
        cout<<"enter At which idx you want to insert : ";
        cin>>y;
        cout<<"which value you want to insert : ";
        cin>>f;
        insertAtIdx(head,tail,f,y);
        cout<<"the Final List is "<<endl;
        display(head);
    }
    else cout<<"Thanks";
}