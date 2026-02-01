#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>  
using namespace std;
int main(){
  string s;
  getline(cin,s);
  string temp;
  stringstream ss(s);
  vector<string>v;
  vector<int>v1;
  vector<int>v2;
  while(ss>>temp){
    v.push_back(temp);
  }
  int m=0,d,a=1;
  for(int i=0;i<v.size();i++){
    a=1;
    if(v[i]=="0")continue;
      else {
        for(int j=i+1;j<v.size();j++){
        if (v[i]==v[j]){
            v[j]="0";
            a++;
            d=i;
        }
      }
      if(a>1){
        if(a>=m){
            m=a;
            v1.push_back(m);
            v2.push_back(d);
        }
      }
      }
  }
  for(int i=0;i<v1.size();i++){
   if(v1[i]==m){
    cout<<v[v2[i]]<<" "<<m<<endl;
   }
  }
}