#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int b=0;
    while(x!=0){
        int l = x%10;
        if(b<l)b=l;
        x=x/10;
    }
    cout<<"largest of all the digits is "<<b;
}