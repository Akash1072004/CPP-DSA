#include<iostream>
using namespace std;
int hcf(int a,int b){
    if(a==0)return b;
    else return hcf(b%a,a);
}
int main(){ //find hcf ...
    int a,b;
    cin>>a>>b;
    cout<<"hcf is "<<hcf(a,b);
}