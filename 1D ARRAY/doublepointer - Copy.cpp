#include<iostream>
using namespace std;
int main(){
    int x=4;
    int* p=&x;
    int**p2=&p;
    cout<<x<<" "<<*p<<" "<<**p2;
}//double star is used to save the address of *p..