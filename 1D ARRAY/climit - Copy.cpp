#include<iostream>
#include<climits>
using namespace std;
int main(){
    int x;
    cin>>x;
    int a[x];
    cout<<"enter your dezire number\n";
    for(int i =0;i<x;i++){
        cin>>a[i];
    }
    int y=INT_MIN;
    for(int i=0;i<x;i++){
        y=max(y,a[i]);
    }cout<<"max of all the number is "<<y;
}