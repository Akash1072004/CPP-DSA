#include<iostream>
using namespace std;
class A{
    private:
     int a_private;
    protected:
     int a_protected;
    public:
     int a_public;
};
class B:public A{
    public:
    int b_public;
};
int main(){
    A a;
    a.a_public=10;
    cout<<a.a_public<<endl; 
    B b;
    b.a_public = 11;
    b.b_public=12;
    cout<<b.a_public<<endl; 
    cout<<b.b_public<<endl; 
}
// we can't go from high security to low security but vice versa
// B is the child of A and some property of parent comes from parent to son
// only public and protected comes to B from A , there will not come private information
/*
 1) public - can access, can inherit
 2) protected - can't access , can inherit
 3) private - can't access , can't inherit...
*/