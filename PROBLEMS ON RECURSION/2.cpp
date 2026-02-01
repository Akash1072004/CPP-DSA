#include<iostream>
#include<vector>
using namespace std;
void seq(vector<int>&v,vector<int>ans,int k,int i){
    if(i==v.size()){
       if(ans.size()==k){
         for(int i=0;i<ans.size();i++){ //print  subsequence of size k...
            cout<<ans[i]<<" ";
        }
        cout<<endl;
       }
       return;
    }
    if((ans.size()+v.size()-i)<k)return;//this is for better time complexity...
    seq(v,ans,k,i+1); //excluding ....
    ans.push_back(v[i]);
    seq(v,ans,k,i+1);//for element include in empty vector...
}
int main(){
    int x;
    cin>>x;
    vector<int>v(x);
    vector<int>ans;
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    int k;
    cout<<"enter the length : ";
    cin>>k;
    seq(v,ans,k,0);
}
