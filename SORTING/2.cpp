#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    vector<int>v(x);
    for(int i=0;i<x;i++){ // selection sorting...
        cin>>v[i];
    }
    for(int i=0;i<x-1;i++){
        int m = i;
        for(int j=i+1;j<x;j++){
           if(v[j]<v[m]){
            m=j;
           }
        }
        swap(v[m],v[i]);    
    }
     for(int i=0;i<x;i++){
        cout<<v[i]<<" ";
    }
}