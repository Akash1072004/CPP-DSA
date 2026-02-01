#include<iostream>
using namespace std;//calculate the factorial using function...
// int a=1;
// int fun(int x){   
//     if(x==0)return a;
//     a=a*x;
//     fun(x-1);
// }
// int main(){
//     int x;
//     cin>>x;
//     fun(x);
//     cout<<a;
// }
//----------> or we can do this thing in different way...<-----------------
int gun(int x){
    if(x==1 || x==0)return 1;
    return x*gun(x-1);
}
int main(){
    int x;
    cin>>x;
    cout<<gun(x);
}