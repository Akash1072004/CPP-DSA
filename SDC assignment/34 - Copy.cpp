#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cin>>x;
    vector<int>v(x);
    v[0]=1;
    v[1]=1;
    for(int i=2;i<x;i++){
        v[i]=v[i-1]+v[i-2];
    }
    for(int i=0;i<x;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<x<<"th fibonacci number is "<<v[x-1];
}