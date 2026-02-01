#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int store(vector<int>&v,int i){
    if(i==v.size())return INT_MIN;
    return max(v[i],store(v,i+1));
}
int main(){ //store max value in the array...
    int x;
    cin>>x;
    vector<int>v(x);
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    cout<<store(v,0);
}