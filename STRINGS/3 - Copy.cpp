#include<iostream>
#include<string>
using namespace std;
int main(){
    //we can use 'string' as data type ...
    // string s1="I am Akash kumar";
    // cout<<s1[2]<<endl;
    // string s;
    // cin>>s;
    // cout<<s;
    //here cin take only one word and when we give space then cin terminate 
    //for solving this we can use 'getline(cin,string name)'...
    string a;
    getline(cin,a);
    cout<<a;
}