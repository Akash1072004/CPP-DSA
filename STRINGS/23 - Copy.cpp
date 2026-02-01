#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>  
using namespace std;
int main(){
    int y;
    cin>>y;
   string s;
  vector<int>v;
   for(int i=0;i<y;i++){
    cin>>s;
    int z=stoi(s);
    v.push_back(z);
   }
   int m=0;
//    for(int i=0;i<v.size();i++){
//        cout<<v[i]<<" ";
//    }
   cout<<endl;
   int a=0;
   for(int i=0;i<v.size();i++){
        if(m<v[i]){
            m=v[i];
            a=i;
        }
   }
   cout<<m<<" index "<<a;
}