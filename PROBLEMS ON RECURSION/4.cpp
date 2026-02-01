#include<iostream>
#include<vector>
using namespace std;
void suba(vector<int>&v,vector<int>ans,int i){
    if(i==v.size()){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }
     suba(v,ans,i+1);
     if(ans.size()==0 || v[i-1]==ans[ans.size()-1]){//you have to maintain the order...
        ans.push_back(v[i]);
        suba(v,ans,i+1);
     }
}
int main(){ //print the subarray...
    int x;
    cin>>x;
    vector<int>v(x);
    vector<int>ans;
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    suba(v,ans,0);
}