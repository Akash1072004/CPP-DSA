#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b;
    cout<<"from : ";
    cin>>a;
    cout<<"to : ";
    cin>>b;
    for(int i=a+1;i<b;i++){
        float x=sqrt(i);
        int y=sqrt(i);
        if(x==y)cout<<i<<" ";
    }
    
}