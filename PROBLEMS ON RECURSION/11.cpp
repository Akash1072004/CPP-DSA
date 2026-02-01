#include<iostream>
#include<string>
using namespace std;
void binary(int x,string s){
    if(x==0){
        cout<<s<<endl;
        return;
    }
        binary(x-1,s+"0");
    if(s[s.size()-1] != '1')binary(x-1,s+"1");
}
int main(){ // Binary string of 0 and 1...
    int x;
    cin>>x;
    binary(x,"");
}