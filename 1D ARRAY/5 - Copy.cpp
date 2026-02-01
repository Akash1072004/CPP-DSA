#include<iostream>
#include<vector>
using namespace std;
int main(){
    int  x;
    cin>>x;
    vector<int>v(x);
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    cout<<endl;
    for(int i=x-1;i>=0;i--){
        cout<<v[i]<<" ";
    }
    
}