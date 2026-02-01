#include<iostream>
using namespace std;
class vechile{
    public:
    virtual void show(){ // by writing virtulal, runtime compile happen mean when i call bike show() then only bike will show...
        cout<<"vechile show"<<endl;
    }
};
class Bike : public vechile{
    public:
    void show(){
        cout<<"Bike show"<<endl;
    }
};
class C : public Bike{
    public:
    void show(){
        cout<<"c show"<<endl;
    }
};
int main(){
    vechile v;
    v.show();
    Bike b;
    b.show();
    
    vechile *c; // above comment for this one ...mean bike is a child of vechile so i can store the address of bike with the help of vechile pointer which is 'c' here...
    c = new Bike;
    c->show();
    c = new vechile;
    c->show();

    Bike *d; // here c is a child of Bike so i can store the address of C with the help of Bike pointer which is 'd' here ...
    d = new C;
    d->show(); // above we have already used 'vitual' so it will print 'c show' that we call but if i had not written it then it would have printed 'Bike show' which is it's parent show...


}