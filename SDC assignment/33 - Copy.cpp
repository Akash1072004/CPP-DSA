#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int x;
    cin>>x;
    int a=pow(2,x);
    int c=a;
    int b=0;
    while(a!=0){
        int l=a%10;
        b=b+l;
        a=a/10;
    }
    cout<<"sum of digits of "<<c<<" is "<<b;
}