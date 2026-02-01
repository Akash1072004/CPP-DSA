#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter x : ";
    cin>>x;
    if(x!=7)x=7;
    int m= x/2 + 1;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=x;j++){
            if(i==1 && j==m)cout<<"* ";
            else if(i==m && j==1)cout<<"* ";
            else if(i==m && j==x)cout<<"* ";
            else if(i==x && j==m)cout<<"* ";
            else if(i==2 && j==2)cout<<"* ";
            else if(i==2 && j==6)cout<<"* ";
            else if(i==6 && j==2)cout<<"* ";
            else if(i==6 && j==6)cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}