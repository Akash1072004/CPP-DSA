#include<iostream>
#include<vector>
using namespace std;
    int x,c;
int ar(int a){
        int b=0;
        while(a!=0){
        int l=a%10;
        b=b+l;
        a=a/10;
    }
    c=b;
    return c;
}
int main(){
    cin>>x;
   int a;
    a=x;
    ar(a);
    while(c/10!=0){
       if(c/10!=0) ar(c);
       }
       cout<<c;
}