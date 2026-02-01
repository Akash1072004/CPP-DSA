#include<iostream>
using namespace std;
void call(int x){
    if(x==0)return;
    cout<<"Pre : "<<x<<endl;
    call(x-1);
    cout<<"In : "<<x<<endl;
    call(x-1);
    cout<<"Post : "<<x<<endl;
}
int main(){//concept of PRE IN POST...
    int x;
    cin>>x;
    call(x);
}