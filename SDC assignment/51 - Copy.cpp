#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cin>>x;
    vector<int>v(x);
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    int m=0;
    for(int i=0;i<x;i++){
        if(v[i]>m)m=v[i];
    }
    int sm=0;
    for(int i=0;i<x;i++){
        if(v[i]!=m){
            if(v[i]>sm)sm=v[i];
        }
    }
    cout<<"second largest element is "<<sm;
}