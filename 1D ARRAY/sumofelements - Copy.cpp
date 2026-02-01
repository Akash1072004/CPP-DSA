#include<iostream>
using namespace std;
int main(){
    int x;
    
    cin>>x;
    int a[x];
    int sum =0;
    for(int i=0;i<=x-1;i++){
        cin>>a[i];
        sum+=a[i];
    }
cout<<"sum is "<<sum;
}