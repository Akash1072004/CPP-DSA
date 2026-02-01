#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int m=x/2+1;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=x-4;j++){
            if(j==1 || i==1 || i==m){
                cout<<"* ";
            }
            else cout<<"  ";
        }
        for(int k=1;k<x-3;k++){
            if(k==1 && i<m && i>1){
                cout<<"* ";
            }
        }
        cout<<endl;
    }
}