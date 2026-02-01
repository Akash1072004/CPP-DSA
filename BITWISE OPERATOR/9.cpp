#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,3,2,1};
    int n=8;
    int res=0;
    for(int i=0;i<n;i++){
        res^=arr[i];
    }
    cout<<res;
}