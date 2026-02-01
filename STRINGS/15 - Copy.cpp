#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
   string s,t;
   getline(cin,s);
   getline(cin,t);
   int x=s.size();
   int y=t.size();
   sort(t.begin(),t.end());
   sort(s.begin(),s.end());
   if(s==t)cout<<true;
   else cout<<false;
}