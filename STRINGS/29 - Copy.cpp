#include<iostream>
#include<string>
#include<vector>
#include<algorithm>//isomorphic best method...
#include<sstream>//leetcode 205...
using namespace std;
int main(){
   string s,t;
   cin>>s>>t;
   int x=s.length();
   int y=t.length();
   int a=0;
  if(x!=y)cout<<false;
  else {
    vector<int>v(150,1000);
    for(int i=0;i<x;i++){
        int idx = (int)s[i];
        if(v[idx]==1000)v[idx]=s[i]-t[i];
        else if(v[idx]!=s[i]-t[i]){
            cout<<false;
            a=1;
            break;
        }
    }
    if(a==0){
        for(int i=0;i<150;i++){
        v[i]=1000;
    }
     for(int i=0;i<x;i++){
        int idx = (int)t[i];
        if(v[idx]==1000)v[idx]=t[i]-s[i];
        else if(v[idx]!=t[i]-s[i]){
            cout<<false;
            a=1;
            break;
        }
    }
    }
   if(a==0) cout<<true;
  }
}
