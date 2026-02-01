#include<iostream>
using namespace std;
int power(int x,int y){
    if(y==0)return 1;
    if(y==1)return x;
    int a=power(x,y/2);
    if(y%2==0)return a*a;
    else return a*a*x;
}
int main(){  //here we calculate power with less time complexcity which is log(n)...
    int x,y;
    cin>>x>>y;
   cout<< power(x,y);
}