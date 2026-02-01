#include<iostream>
#include<string>
#include<vector>
#include<algorithm>//important best method...
#include<sstream>  //use for print max frequency words of given sentences...
using namespace std;
int main(){
  string s;
  getline(cin,s);
  string temp;
  stringstream ss(s);
  vector<string>v;
  while(ss>>temp){
    v.push_back(temp);
  }
  int m=0,a=1;
  sort(v.begin(),v.end());
  for(int i=1;i<v.size();i++){
       if(v[i]==v[i-1])a++;
       else a=1;
       m=max(m,a);
  }
  a=1;
  for(int i=1;i<v.size();i++){
      if(v[i]==v[i-1])a++;
      else a=1;
      if(a==m){
        cout<<v[i]<<" "<<m<<endl;
      }
  }
}