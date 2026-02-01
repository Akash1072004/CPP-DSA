#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    vector<int>v(x);
    for(int i=0;i<x;i++){ // insertion sort...stable sorting algorithm...
        cin>>v[i];
    }
    for(int i=1;i<x;i++){
        for(int j=i-1;j>=0;j--){
            if(v[i]<v[j]){
                swap(v[i],v[j]);
                i--;
            }
            else break;
        }
    }
     for(int i=0;i<x;i++){
        cout<<v[i]<<" ";
    }
}