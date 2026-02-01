#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void subset(vector<int>&v,vector<int>ans,int i,bool flag){
   if(i==v.size()){
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return;
   }
   if(flag==true)subset(v,ans,i+1,true);
   ans.push_back(v[i]);
   if(v[i]==v[i+1])subset(v,ans,i+1,false);
   else subset(v,ans,i+1,true);
}
int main(){ //print subset for repeating element...
    int x;
    cin>>x;
    vector<int>v(x);
    vector<int>ans;
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    subset(v,ans,0,true);
}