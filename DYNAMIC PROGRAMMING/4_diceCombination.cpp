#include<bits/stdc++.h>
using namespace std;
int dice(int n,int i){
    if(n==0)return 1;
    if(n<0 || i>6)return 0;
    int take = dice(n-i,i);
    int notTake = dice(n,i+1);
    return take + notTake; //This is invalid code retry later...
    // return dice(n-i,i)+dice(n,i+1);
}
int main(){
    int n = 3;
    cout<< dice(n,1);
}   