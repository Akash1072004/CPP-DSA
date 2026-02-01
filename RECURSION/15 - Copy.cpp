#include<iostream>
using namespace std;
void fun(int er,int ec,string s){
    if(ec<0 || er<0)return;
    if(ec==0 && er==0){
        cout<<s<<endl;
    };
    fun(er,ec-1,s+'R');
    fun(er-1,ec,s+'D');
}
int main(){ // print all path of maze question is solved by only two variable...
    int x,y;
    cin>>x>>y;
    fun(x,y,"");
}