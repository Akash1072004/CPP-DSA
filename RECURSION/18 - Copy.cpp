#include<iostream>
using namespace std;
int call(int a,int b){
  if(a>=b)return 0;
  cout<<a<<" ";
  return a+call(a+2,b);
}
int main(){ // calculate the sum of odd numbers between a and b... 
    int a,b;
    cin>>a>>b;
    if(a%2==0)cout<<endl<<call(a+1,b);
    else cout<<endl<<call(a+2,b);
}