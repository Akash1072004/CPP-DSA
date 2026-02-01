#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
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
  int d,a=1;
  for(int i=0;i<v.size();i++){
    a=1;
      for(int j=i+1;j<v.size();j++){
        if(v[j]=="0")continue;
        if (v[i]==v[j]){
            v[j]="0";
            a++;
            d=i;
        }
      }
      if(a>1){
        cout<<v[d]<<" "<<a<<endl;
      }
  }
}