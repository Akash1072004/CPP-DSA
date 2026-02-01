#include<iostream>
using namespace std;
void zig(int x){
    if(x==0)return;
    cout<<x;
    zig(x-1);
    cout<<x;
    zig(x-1);
    cout<<x;
}
int main(){  //print zig zag like 111 or 211121112 like these...
    int x;
    cin>>x;
    zig(x);
}