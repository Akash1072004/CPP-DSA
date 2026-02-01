#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int a[x];
    cout<<"enter your dezire number\n";
    for(int i =0;i<x;i++){
        cin>>a[i];
    }
    int y=a[0];//don't start with zero because if the numbers are in negative form then it will sow error...
    for(int i=0;i<x;i++){
        y=max(y,a[i]);
    }cout<<"max of all the number is "<<y;
}