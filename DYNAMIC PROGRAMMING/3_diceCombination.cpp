#include<bits/stdc++.h>
using namespace std;
int dice(int n){
    if(n<0)return 0;
    if(n==0)return 1;
    int sum = 0;
    for(int i=1;i<=6;i++){
        if(n<i)break;
        sum+=dice(n-i);
    }
    return sum;
}
int main(){
    int n = 3;
    cout<< dice(n);
}