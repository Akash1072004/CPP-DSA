#include<iostream>
using namespace std;
int fun(int x,int i){ //print 1 to n with extra parameter '1'..
    if(i>x)return 0; 
    cout<<i<<endl;
    fun(x,i+1);
}
int main(){
    int x;
    cin>>x;
    fun(x,1);
}