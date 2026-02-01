#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int b=0;
    for(int  i=1;i<=x/2;i++){
        if(x%i==0)b=b+i;
    }
    if(b==x)cout<<b<<" is perfect number";
    else cout<<x<<" is not a perfect number";
}