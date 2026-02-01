#include<iostream>
using namespace std;
int hcf(int m,int x,int y){
    if(m==1)return 1;
    if(x%m==0 && y%m==0)return m;
    hcf(m-1,x,y);
}
int main(){
    int x,y;
    cin>>x>>y;
    int m = min(x,y);
    cout<<hcf(m,x,y);
}