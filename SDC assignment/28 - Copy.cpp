#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter 1st number : ";
    cin>>a;
    cout<<"enter 2nd number : ";
    cin>>b;
    int m = min(a,b);
    for(int i=m;i>1;i--){
        if(a%m==0 && b%m == 0){
            cout<<i;
            break; 
        }
        else {
            cout<<"there is not any common divisor";
            break;
        }
    }
}