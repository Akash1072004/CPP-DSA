#include<iostream>
using namespace std;
int fun(int x){  
    if(x==0)return 0;
    return x+fun(x-1);
}
int main(){
    int x;
    cin>>x;
    cout<<fun(x);
}