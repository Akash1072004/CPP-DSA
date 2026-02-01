#include<iostream>
#include<string>
#include<vector>
#include<algorithm>//isomorphic lengthy method but mine also...
#include<sstream>
using namespace std;
int main(){
   string s,t;
   cin>>s>>t;
   int x=s.length();
   int y=t.length();
   string h,g;
   string m,n;
   if(x==y){
    for(int i=0;i<x;i++){
        h.push_back(s[i]);
        m.push_back(s[i]);
        g.push_back(t[i]);
        n.push_back(t[i]);
    }
    cout<<h<<endl<<g;
    cout<<endl;
    for(int i=0;i<x;i++){
        char a = s[i];
         char b = t[i];
        for(int j=0;j<x;j++){
            if(s[j]==a) h[j]=g[i];
            if(t[j]==b)n[j]=m[i];
        }
    }
    if(h==t && n==s)cout<<"true";
    else cout<<"false";
   }
   else cout<<"false";
}
