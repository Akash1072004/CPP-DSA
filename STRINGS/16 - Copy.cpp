#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
   string s;
   getline(cin,s);
   int x=s.size();
   int a,b=0,c;
   char d;
   for(int i=0;i<x;i++){
    a=1;
    for(int j=i+1;j<x;j++){
        if(s[i]==s[j]){
            a++;
        c=i;
        }
    }
    if(a>=b){
        b=a;
        d=s[c];
   cout<<b<<" "<<d<<endl;
    }
   }
}