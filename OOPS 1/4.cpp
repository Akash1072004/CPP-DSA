#include<iostream>
using namespace std;
class calculator{
    private: // if we private then we can't access outside from class...
    int a;
    int b;
    public: // by doing public we can access from outside...
    void add(){
        a=10;
        b=2;
        cout<<"add : "<<a+b<<endl;
    }
    void subs(){
        a=20;
        b=15;
        cout<<"subs : "<<a-b<<endl;
    }
};
int main(){
    calculator cal;
    // cal.a = 10; we can't assign value becz a and b are private...
    // cal.b = 2;
    cal.add();
    cal.subs();
}