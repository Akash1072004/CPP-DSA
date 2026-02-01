#include<iostream>
#include<string>
using namespace std;
void subset(string s,string t){
  if(s.size()==0){
    cout<<t<<" ";
    return;
  }
  subset(s.substr(1),t+s[0]);
  subset(s.substr(1),t);
}
int main(){ //print subset of string...
  string s;
  cin>>s;
  subset(s,"");
}