#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    for(int i=1;i<=x;i++){
        int y=i-1;
        int z = x-i;
        for(int j=1;j<=x-i;j++){
            cout<<"* ";
        }
        for(int k=1;k<=2*y-1;k++){
            cout<<"  ";
        }
        if(i==1)z=z-1;
        for(int l=1;l<=z;l++){
            cout<<"* ";
        }
        cout<<endl;
    }
}