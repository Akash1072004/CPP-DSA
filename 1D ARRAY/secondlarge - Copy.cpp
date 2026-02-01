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
    int y=a[0];
    for(int i=0;i<x;i++){
        y=max(y,a[i]);
    } cout<<y<< endl;
    int h=a[0];
    for(int i=0;i<x;i++){
        if(a[i]==y){
            continue;
        }h=max(h,a[i]);
    }cout<<"second largest number of all element is "<< h;
}