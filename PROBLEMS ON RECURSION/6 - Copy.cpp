#include<iostream>
#include<string>
using namespace std;
bool pld(string s,int i,int j){
    if(i>j)return true;
    if(s[i]!=s[j])return false;
    else return pld(s,i+1,j-1);
}
int main(){ //print palindrome or not...
    string s;
    cin>>s;
    cout<<pld(s,0,s.size()-1);
}