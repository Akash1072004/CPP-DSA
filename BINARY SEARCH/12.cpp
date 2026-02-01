#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>&v,int h,int mid){ // kokoEat...leetcode 875...
    int x = v.size();
    int count = 0;
    for(int i=0;i<x;i++){
        if(v[i]<=mid)count++;
        else if(v[i]%mid==0)count = count + (v[i]/mid);
        else count += ((int)(v[i]/mid))+1;
    }
    if(count>h)return false;
    else return true;
}
int kokoEat(vector<int>&v,int h){
    int ans = 0;
   int x = v.size();
   int m = INT_MIN;
   for(int i=0;i<x;i++){
    if(v[i]>m)m=v[i];
   }
   int s = 1;
   int e = m;
   while(s<=e){
    int mid = s+(e-s)/2;
    if(check(v,h,mid)){
        ans = mid;
        e = mid - 1;
    }
    else {
        s=mid+1;
    }
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
    int h;
    cout<<"enter hours : ";
    cin>>h;
    cout<<kokoEat(v,h);
}