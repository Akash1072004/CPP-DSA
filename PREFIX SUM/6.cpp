#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    vector<int>v(x);
    for(int i=0;i<x;i++){ // leetcode 2389...
        cin>>v[i];       
    }
    int y;
    cin>>y;
    vector<int>q(y);
    vector<int>ans(y);
    for(int i=0;i<y;i++){ 
        cin>>q[i];       
    }
    sort(v.begin(),v.end());
    for(int i=1;i<x;i++){
        v[i]=v[i]+v[i-1];
    }
  for(int i=0;i<y;i++){
      int s = 0;
      int e = x-1;
    while(s<=e){
    int mid=s+(e-s)/2;
    if(v[mid]<=q[i] && (mid+1==x || v[mid+1]>q[i])){
        ans[i]=mid+1;
        break;
    }
    else if(v[mid]>q[i])e=mid-1;
    else s=mid+1;
  }
  }
   
   for(int i=0;i<y;i++){
        cout<<ans[i]<<" ";
    }
}