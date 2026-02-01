#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>  
using namespace std;
int main(){
    int x;
    cin>>x;
   vector<string>v(x);
   for(int i=0;i<x;i++){
    cin>>v[i];
   }
   for(int i=0;i<x;i++){
        cout<<v[i]<<" ";
   }
   cout<<endl;
   string s=v[0];
   int mi=s.length();
   vector<vector<string>>v1(x);
  for(int i=0;i<x;i++){
  vector<string>v2;
    string s=v[i];
    for(int j=0;j<s.size();j++){
        string t(1,s[j]);
        v2.push_back(t);
    }
        int l=v2.size();
        mi=min(mi,l);
    v1[i]=v2;
  }
  cout<<"min j = "<<mi<<endl;
  for(int i=0;i<x;i++){
    for(int j=0;j<v1[i].size();j++){
        cout<<v1[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<endl;
  char h;
  for(int i=0;i<mi;i++){
    int g=0;
   int j=0;
    while(j<x-1){
        if(v[j][i]==v[j+1][i]){
            g++;
            j++;
            h=v[j][i];
        }
        else break;
    }
    // cout<<"g = "<<g<<endl;
    if(g==x-1){
        cout<<h<<" ";
    }
  }
}