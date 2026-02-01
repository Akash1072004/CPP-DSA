#include<iostream>
#include<string>
#include<vector>
using namespace std;
void remove(vector<int>&v,vector<int>&v1,int y,int i){
   if(i==v.size()){
    for(int j=0;j<v1.size();j++){
        cout<<v1[j]<<" ";
    }
    return ;
   }
   if(v[i]==y)remove(v,v1,y,i+1);
   else {
    v1.push_back(v[i]);
    remove(v,v1,y,i+1);
   };
}
int main(){   //remove the char from given vector by recursion...
    int x;
    cin>>x;
    vector<int>v(x);
    vector<int>v1;
   for(int i=0;i<x;i++){
    cin>>v[i];
   }
    cout<<"enter char you want to remove : ";
    int y;
    cin>>y;
    int i=0;
    remove(v,v1,y,i);
}