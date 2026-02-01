#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"from x : ";
    cin>>x;
    cout<<"to y : ";
    cin>>y;
    for(int i=x+1;i<y;i++){
        int a=0;
        for(int j=2;j<=i/2;j++){
            if(i%j==0)a=1;
        }
        if(a==0)cout<<i<<" ";
    }
}