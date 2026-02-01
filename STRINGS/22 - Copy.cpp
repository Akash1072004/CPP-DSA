#include<iostream>
using namespace std;
int main(){
    string s="123456";
    int x=stoi(s);//stoi is used for converting string into number......
    cout<<x-1<<endl;
    cout<<x<<endl;
    cout<<x/2<<endl;
    int a=98760;
    string str= to_string(a);//used for converting integer to string ...
    cout<<str<<endl;
    string p="1234567890";
    int y=stoll(p);//stoll is used to convert big number to integer...
    cout<<y;

}