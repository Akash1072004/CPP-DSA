#include<bits/stdc++.h>
using namespace std;
void prefixSum(vector<int>&v){
    int x = v.size();
        for(int i=0;i<x;i++){ // Prefix sum...
            if(i==0)continue;
            else v[i]=v[i]+v[i-1];
        }
       for(int i=0;i<x;i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    int x;
    cin>>x;
    vector<int>v(x);
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    prefixSum(v);
}