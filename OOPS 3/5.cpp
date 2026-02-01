#include<iostream>
using namespace std;
void add(int a,int b){
    cout<<a+b<<endl;
}
void add(int a){
    cout<<a+10<<endl;
}
int main(){
    add(10,10); // we can use same name of multiple function but we have to change the parameters...
    add(30);
}