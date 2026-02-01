#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int m=x/2+1;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=x;j++){
            if(i+j==x+1 ||i==m && j>x-(m-1))cout<<"*";
            else cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++){
           if(k==i-1 || i==m && k<x-(m-1))cout<<"*";
           else cout<<" ";
        }
       cout<<endl;
    }
}