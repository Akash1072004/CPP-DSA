#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int v):val(v),next(NULL){} // LinkedList implementation of Stack...
};
class Stack{
    public:
    Node* head;
    int Size;
    Stack():head(NULL),Size(0){}
    void push(int v){ 
        Node* temp = new Node(v);
        temp->next = head;
        head = temp;
        Size++;
    }
    void pop(){
        if(Size==0){
            cout<<"LL is empty";
            return;
        }
        head = head->next;
        Size--;
    }
    int top(){
        if(Size==0){
            cout<<"LL is empty";
            return -1;
        }
        return head->val;
    }
    int size(){
        return Size;
    }
    void display(){
        Node* temp = head;
        while(temp){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
    st.display();


}