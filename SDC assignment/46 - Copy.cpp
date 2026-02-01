#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int x=1;
    for(int i=1;i<=b;i++){
        x=x*a;
    }
    cout<<a<<" raise to "<<b<<" is "<<x;
}