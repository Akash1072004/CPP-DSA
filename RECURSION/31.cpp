#include<iostream>
#include<vector>
using namespace std;
void asub(vector<int>&v,vector<int>v1,int i,vector<vector<int>>&v2){
   if(i==v.size()){
        v2.push_back(v1);
    return;
   }
   asub(v,v1,i+1,v2);
   v1.push_back(v[i]);
   asub(v,v1,i+1,v2);
}
int main(){
    int x;
    cin>>x;
    vector<int>v(x);
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    vector<int>v1;
    vector<vector<int>>v2;
    asub(v,v1,0,v2);
    cout<<v2.size()<<endl;
    for(int i=0;i<v2.size();i++){
        for(int j=0;j<v2[i].size();j++){
            cout<<v2[i][j]<<" ";
        }
        cout<<endl;
    }
}