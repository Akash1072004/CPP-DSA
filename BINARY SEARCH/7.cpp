#include<bits/stdc++.h>
using namespace std;
int peak_idx(vector<int>&v){
    int x = v.size();
    int s = 0;
    int e = x-1;
    while(s<=e){ // find peak element in array ... leetcode 852...
        int mid = s+(e-s)/2;
        if(mid==0){
            if(v[mid]>v[mid+1])return mid;
            else return mid+1;
        }
        else if(v[mid]>v[mid-1] && v[mid]>v[mid+1])return mid;
        else if(v[mid]>=v[mid-1] && v[mid]<=v[mid+1])s=mid+1;
        else e=mid-1;
    }
}
int main(){
    int x;
    cin>>x;
    vector<int>v(x);
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    cout<<peak_idx(v);
}