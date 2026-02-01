#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>&v){
    int x = v.size();
    for(int i=0;i<x;i++){ // check if array can be divided into two equal sum or not...
        if(i==0)continue; 
        else v[i]=v[i]+v[i-1];
    }
   for(int i=0;i<x;i++){  
        if(2*v[i]==v[x-1]) return true;
    } 
    return false;
}
int main(){
    int x;
    cin>>x;
    vector<int>v(x);
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
   cout<< check(v);
}