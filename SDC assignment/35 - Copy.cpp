#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cin>>x; 
    int i=0;
    int a=1,b=1;
    int s=0;
    while(i<=x){
        s=a+b;
        b=a;
        a=s;
        i++;
        cout<<s<<" ";
    }
}