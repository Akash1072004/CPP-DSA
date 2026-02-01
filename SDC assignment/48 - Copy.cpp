#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int x;
    cin>>x;
    int s=0,a=0;
    while(x!=0){
        int l=x%10;
        s=s+(l*pow(2,a));
        a++;
        x=x/10;
    }
    cout<<"Binary to decimal is "<<s;
}