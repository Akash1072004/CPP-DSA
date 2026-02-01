#include<iostream>
#include<vector>
using namespace std;
void cs(vector<int>&v,vector<int>ans,int idx,int t){
    if(t==0){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;        return;
    }
    if(t<0)return;
    for(int i=idx;i<v.size();i++){
        ans.push_back(v[i]);
        cs(v,ans,i,t-v[i]);
        ans.pop_back();
    }
}
int main(){
    int x;
    cin>>x;
    vector<int>v(x);
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    int t;
    cout<<"enter target : ";
    cin>>t;
    vector<int>ans;
    cs(v,ans,0,t);
}