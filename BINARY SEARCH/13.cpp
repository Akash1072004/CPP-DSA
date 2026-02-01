#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>&v,int t,int mid){
   int x = v.size();
   int count = 0;
   for(int i=0;i<x;i++){
      count += (int)mid/v[i];
   }
   if(count<t)return false;
   else return true;
}
int minTime(vector<int>&v,int t){
    int ans=0;
   int x = v.size();
   int m = INT_MAX;
   for(int i=0;i<x;i++){
    m=max(m,v[i]);
   }
   int s=1;
   int e = (m*t)/x;
   while(s<=e){
    int mid=s+(e-s)/2;
    if(check(v,t,mid)){
        ans=mid;
        e=mid-1;
    }
    else s=mid+1;
   }
   return ans;
}
int main(){
    int x;
    cin>>x;
    vector<int>v(x);
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    int t;
    cout<<"enter trips : ";
    cin>>t;
    cout<<minTime(v,t);
}