#include<iostream>
#include<vector>
using namespace std;
void asub(vector<int>&v,vector<int>v1,int i){
   if(i==v.size()){
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    return;
   }
   asub(v,v1,i+1);
   v1.push_back(v[i]);
   asub(v,v1,i+1);
}
int main(){
    int x;
    cin>>x;
    vector<int>v(x);
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    vector<int>v1;
    asub(v,v1,0);
    //cout<<v1.size()<<endl;
    // for(int i=0;i<v1.size();i++){
    //     cout<<v1[i]<<" ";
    // }
}