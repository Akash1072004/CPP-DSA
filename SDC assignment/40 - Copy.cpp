#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int b=0;
    int c=x;
    while(x!=0){
        int f=1;
        int l=x%10;
        for(int i=1;i<=l;i++){
            f=f*i;
        }
        b=b+f;
        x=x/10;
    }
    if(b==c)cout<<c<<" is strong number";
    else cout<<c<<" is not a strong number";
}