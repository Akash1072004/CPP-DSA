#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>&v,int i){
    if(i==v.size())return;
    cout<<v[i]<<" ";
    print(v,i+1);
}
int main(){ //print array by recursion...
    int x;
    cin>>x;
    vector<int>v(x);
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    print(v,0);
}