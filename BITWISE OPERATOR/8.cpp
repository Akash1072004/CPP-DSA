#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2 ,4,10,1,4,2};
    int n=7;
    int res = 0;
    for(int i=0;i<n;i++){
        res=res^arr[i]; // it actually check which element is unique in this array mean which ele is not repeating with the help of xor...
    }
    cout<<res;
    // 0^3=3 mean xor of 0 with any number will give the ans that same number ...
    // 3^3 = 0 mean xor of two same number is 0...
}