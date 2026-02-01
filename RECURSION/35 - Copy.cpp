#include<iostream>
#include<vector>
using namespace std;
void pas(vector<int>&v,vector<int>v1,int i){
    if(i==v.size()){
        for(int i=0;i<v1.size();i++){
            cout<<v1[i]<<" ";
        }
        cout<<endl;
        v.pop_back();
         for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
        v1.push_back(v[i]);
    v[i]=v[i]+v[i+1];
    pas(v,v1,i+1);
}
int main(){
    int x;
    cin>>x;
    vector<int>v(x);
    vector<int>v1;
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    pas(v,v1,0);
}