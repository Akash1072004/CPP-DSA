#include<iostream>
using namespace std;
int main(){
    int a,d,n;
    cout<<"enter a,d,n : \n";
    cin>>a>>d>>n;
    int x=0;
    int s=0;
   int i=a;
   while(x!=n){
    s=s+i;
    i=i+d;
    x++;
   }
   cout<<"sum is "<<s;
}