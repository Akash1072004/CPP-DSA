#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int x;
 string st="";
 int a=0;
string check(vector<string>&strs){
    if(x==1){
        a=1;
        return strs[0];
    }
    string m=strs[0];
    string n=strs[x-1];
    for(int i=0;i<min(strs[0].size(),strs[x-1].size());i++){
        if(m[i]==n[i]){
            st=st+m[i];
        }
        else{
         break;
        }
            
    }
    return st;
}
int main(){
    cin>>x;
   vector<string>s(x);
   for(int i=0;i<x;i++){
    cin>>s[i];
   }
   check(s);
   if(a==1)cout<<s[0];
   else
   cout<<st;
}
