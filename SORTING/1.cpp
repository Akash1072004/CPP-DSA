#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    vector<int>v(x);
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    for(int i=0;i<x-1;i++){
        bool flag = true;
        for(int j=0;j<x-i-1;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
                flag = false;
            }
        }
        if(flag==true)break;
    }
     for(int i=0;i<x;i++){
        cout<<v[i]<<" ";
    }
}