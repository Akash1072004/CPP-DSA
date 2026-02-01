#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;

    Node(int v){
        val=v;
        next = NULL;
    }
    
};
int main(){
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);

    // forming linkedList...
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = NULL;

    cout<<a.val<<endl;
    cout<<(a.next)->val<<endl;// access the value of 'b' without using 'b' ...
    // here (a.next) behaves as a pointer...

    // now access the value of d with only using 'a'...

    cout<<(((a.next)->next)->next)->val;
}