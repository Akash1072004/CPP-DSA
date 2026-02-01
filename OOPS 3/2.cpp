#include<iostream>
using namespace std;
void print(){
    static int a=10; // static is used to check wheather 'a' is initiate before or not...
    cout<<a<<endl;
    a++;
}
int main(){
    print();
    print();
    print();
}