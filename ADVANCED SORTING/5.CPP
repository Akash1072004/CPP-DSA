#include<bits/stdc++.h>
using namespace std;
void cycleSort(vector<int>&v){
    int x = v.size();
    int i=0;
    while(i<x){
        // int a = v[i];
        if(i!=v[i]-1){
            swap(v[i],v[v[i]-1]);
        }
        else i++;
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
    cycleSort(v);
}