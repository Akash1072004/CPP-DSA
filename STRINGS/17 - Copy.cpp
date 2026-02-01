#include<iostream>
#include<string>
#include<vector>
#include<algorithm>  //finding the most repeating/frequency of character...
using namespace std;
int main(){
   string s;
   getline(cin,s);
  vector<int>v(26,0);
  int m=0;
  for(int i=0;i<s.length();i++){
      int a=int(s[i]);
      (v[a-97])++;
      if(v[a-97]>m)m=v[a-97];
  }
  for(int i=0;i<26;i++){
      if(v[i]==m){
        int n=i+97;
       cout<<char(n)<<" "<<m<<endl;
      }
  }
}