#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int m=x/2+1;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=x;j++){
            if(i==1 || j==1 || j==x || i==m ){
                cout<<"* ";
            }
            else cout<<"  ";
        }
        cout<<endl;
    }
}