#include<iostream>
using namespace std;
int fun(int er,int ec){
    if(ec<0 || er<0)return 0;
    if(ec==0 && er==0)return 1;
    int left=fun(er,ec-1);
    int up=fun(er-1,ec);
    return left + up;
}
int main(){ // this maze question is solved by only two variable...
    int x,y;
    cin>>x>>y;
    cout<<fun(x,y);
}