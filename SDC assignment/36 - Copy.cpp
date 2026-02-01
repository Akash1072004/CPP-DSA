#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int a=0;
    while(x!=0){
        int l=x%10;
        a=a + l*l;
        x=x/10;
    }
    cout<<"product of digits is "<<a;
}