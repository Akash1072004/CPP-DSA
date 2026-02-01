#include<iostream>
#include<string>
using namespace std;
void subset(string s,string t,int i){
  if(i==s.length()){ 
    cout<<t<<" ";
    return;
  }
    subset(s,t+s[i],i+1);
    subset(s,t,i+1);
}
int main(){ //print subset of string by passing index...
  string s;
  cin>>s;
  subset(s,"",0);
}