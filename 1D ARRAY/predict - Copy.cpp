#include<iostream>
using namespace std;
int main(){
    int a=4;
    int* ptr=&a;
  int  b=++(*ptr);//this is preincreminent..where ptr++ is post increminint..
    cout<<a<<" "<<b;
}