#include<bits/stdc++.h>
using namespace std;
bool check(vector<int>&v,int d,int mid){
    int x = v.size();
    int q = mid;
    int count = 0;
    for(int i=0;i<x;i++){ // capacity of ship...leetcode 1011...
        if(mid>=v[i]){
            mid=mid-v[i];
        }
        else {
            count++;
            mid=q;
            mid=mid-v[i];
        }
    }
    count++;
    if(count>d)return false ;
    else return true;
}
int minCapacity(vector<int>&v,int d){
    int x = v.size();
    int m = INT_MIN;
    int sum = 0;
    int ans =  0;
    for(int i=0;i<x;i++){
        if(v[i]>m)m=v[i];
        sum = sum + v[i];
    }
    int s = m;
    int e = sum;
    while(s<=e){
        int mid = s+ (e-s)/2;
        if(check(v,d,mid)){
            ans = mid;
            e = mid -1;
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
    int d;
    cout<<"enter days : ";
    cin>>d;
    cout<<minCapacity(v,d);
}