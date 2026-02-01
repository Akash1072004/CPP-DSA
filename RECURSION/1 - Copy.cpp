#include<iostream>
using namespace std;
void fun(int x){   //self calling function is called recursion...
    if(x==0)return ;
    cout<<"good morning"<<endl;
    fun(x-1);
}
int main(){
    int x;
    cin>>x;
    fun(x);
}