#include<iostream>
using namespace std;
int pow(float x){
    if(x<=2)return x;
    cout<<x<<" ";
    return pow(x/2);
}
int main(){
    float x;
    cin>>x;
   float a = pow(x);
   cout<<endl;
//    cout<<a<<endl;
    if(a==2)cout<<"true";
    else cout<<"false";
}