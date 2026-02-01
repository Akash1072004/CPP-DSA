#include<bits/stdc++.h>
using namespace std;
int bit(int n,int k,int last){
    if(n==0)return 0;
    if(n==1){
        if(k==0)return 1;
        else return 0;
    }
    if(last==1) return bit(n-1,k-1,1) + bit(n-1,k,0);
    else return bit(n-1,k,0) + bit(n-1,k,1);
}
int main(){
    int n,k;
    cin>>n>>k; // n = length of Binary string and k = Adjacent Bit Count
    int ans = bit(n,k,1)+bit(n,k,0);
    cout << ans;
}