#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
   string s,t;
   cin>>s>>t;
   int x=s.length();
   int y=t.length();
   string h,g;
   if(x==y){
    int a=0,b=0;
    for(int i=1;i<x;i++){
        h.push_back(s[i]);
        g.push_back(t[i]);
        if(s[i]==s[i-1] && t[i]==t[i-1])a++;
        else continue;
    }
    cout<<h<<endl<<g;
    cout<<endl;
    for(int i=1;i<x;i++){
        if(t[i]==t[i-1])b++;
        else continue;
    }
    cout<<a<<" "<<b<<endl;
    if(a==b){
         sort(s.begin(),s.end());
         sort(t.begin(),t.end());
         int c=0,d=0;
         for(int i=1;i<x;i++){
        if(s[i]==s[i-1])c++;
        if(t[i]==t[i-1])d++;
        else continue;
    }
    cout<<c<<" "<<d<<endl;
    if(c==d)cout<<"isomorphic";
    else cout<<"not isomorphic";
    }
    else cout<<"not isomorphic";
   }
    else cout<<"not isomorphic";
}
