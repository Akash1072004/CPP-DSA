#include<iostream>
#include<vector>
using namespace std;
void call(vector<int>&v,int x){
    if(x==0)return;
     for(int i=0;i<x-1;i++){
       v[i]=v[i]+v[i+1];
       cout<<v[i]<<" ";
     }
     cout<<endl;
     call(v,x-1);
}
int main(){
    int x;
    cin>>x;
    vector<int>v(x);
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    cout<<endl;
    for(int i=0;i<x;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    call(v,x);
}