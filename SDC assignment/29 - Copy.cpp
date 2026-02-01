#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter time in second : ";
    cin>>a;
   int m = a/60;
   int h=m/60;
   int a1=a%60;
   int m1=m%60;
   int h1=h%60;
   cout<<h1<<" : "<<m1<<" : "<<a1;
}