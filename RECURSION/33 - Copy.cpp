#include<iostream>
#include<vector>
using namespace std;
void subs(vector<int>&v,int k,vector<int>v1,int i){
    if(i==v.size()){
        // if(v1.size()==k){
            for(int i=0;i<v1.size();i++){
            cout<<v1[i]<<" ";
        }
        cout<<endl;
        // }
        return;
    }
    if(v1.size()+v.size()-i<k)return;
    subs(v,k,v1,i+1); 
    v1.push_back(v[i]);
    subs(v,k,v1,i+1); 
}
int main(){
    int x,k;
    cout<<"enter the number : ";
    cin>>x;
    vector<int>v(x);
    vector<int>v1;
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    cout<<"enter the length of sequence : ";
    cin>>k;
    subs(v,k,v1,0);
}