#include<bits/stdc++.h>
using namespace std;
int set_bit(int x){
    return __builtin_popcount(x); // inbuilt function to calculate setbits...
}
int set_bit2(int x){
    int count=0;
    while(x!=0){
        x = (x & (x-1));
        count++;
    }
    return count;
}

int main(){
    int x;
    cin>>x;
    cout<<set_bit(x)<<"\n";
    cout<<set_bit2(x)<<"\n";
}