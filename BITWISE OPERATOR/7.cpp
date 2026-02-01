#include<bits/stdc++.h>
using namespace std;
int max_powof2(int x){
    x=x|x>>1; // x>>1 -> 10000 01000 when take xor with x(10000) then it become 11000...
    x=x|x>>2; // it tells the max power of 2 which is less than x ...
    x=x|x>>4; 
    x=x|x>>8;
    x=x|x>>16;
    return (x+1)>>1;
}
int main(){
    int x;
    cin>>x;
    cout<<max_powof2(x);
}