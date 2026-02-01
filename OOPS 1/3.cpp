#include<iostream>
using namespace std;
class calculator{
    public:
    int a;
    int b;
    void add(){
        cout<<"add : "<<a+b<<endl;
    }
    void subs(){
        cout<<"subs : "<<a-b<<endl;
    }
};
int main(){
    calculator cal;
    cal.a = 10;
    cal.b = 2;
    cal.add();
    cal.subs();
}