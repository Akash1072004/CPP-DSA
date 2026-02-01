#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter your number : ";
    cin>>x>>y;
    int* p=&x;
    int* p2=&y;
    int a=(*p)*(*p2);
    cout<<"product is "<<a;
}