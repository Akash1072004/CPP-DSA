#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>&v,int i,int max){
    if(i==v.size()){
        cout<<max;
        return;
    }
    if(v[i]>max)max=v[i];
    print(v,i+1,max);
}
int main(){ //print max value in the array...
    int x;
    cin>>x;
    vector<int>v(x);
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    print(v,0,0);
}