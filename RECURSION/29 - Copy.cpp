#include<iostream>
#include<vector>
#include<string>
using namespace std;
void subset(string s,string t,vector<string>&v,int i){
  if(i==s.size()){
    v.push_back(t);
    return;
  }
    subset(s,t+s[i],v,i+1);
    subset(s,t,v,i+1);
}
int main(){ //store subset of string and then print...
  string s;
  cin>>s;
  vector<string>v;
  subset(s,"",v,0);
  cout<<v.size()<<endl;
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
  }
}    