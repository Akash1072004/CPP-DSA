#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int m=x-1;
    int z=1;
    for(int i=1;i<=2*x-1;i++){
        if(i<=x)cout<<i<<" ";
        else{ cout<<m<<" ";
        m--;
        }
    }
    cout<<endl;
    m = x-1;
    for(int i=1;i<=x;i++){
       for(int j=1;j<=x-i;j++){
        cout<<j<<" ";
       }
       for(int k=1;k<=2*i-1;k++){
        cout<<"  ";
       }
       for(int l=1;l<=x-i;l++){
        cout<<m<<" ";
        m--;
       }
       m=x-z-1;
       z++;
       cout<<endl;
    }
}