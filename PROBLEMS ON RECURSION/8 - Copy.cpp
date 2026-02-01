#include<iostream>
using namespace std;
int hcf(int x,int y,int ma,int mi){
    int r = ma%mi;
    ma=mi;
    if(r==1)return 1;
    if(r==0){
        // cout<<r<<endl;
        return ma;
    } 
    mi=r;
    hcf(x,y,ma,mi);
}
int main(){ //find the hcf of given two numbers...
    int x,y;
    cin>>x>>y;
  int mi =  min(x,y);
  int ma =  max(x,y);
  cout<<"HCF is ";
    cout<<hcf(x,y,ma,mi);
}