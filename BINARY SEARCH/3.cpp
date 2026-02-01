#include<bits/stdc++.h>
using namespace std;
int main(){ // first occourence element...
    int x;
    cout<<"enter x : ";
    cin>>x;
    int t;
    vector<int>v(x);
    for(int i=0;i<x;i++){ 
        cin>>v[i];
    }
    cout<<"enter target : ";
    cin>>t;
    int s = 0;
    int e = x-1;
    int a = 0;
    while(s<=e){
        int mid=(s+e)/2;
        if(v[mid]==t && v[mid-1]!=t){
            cout<<"index is : "<<mid;
            a=1;
            break;
        }
        else if(v[mid]==t || v[mid]>t)e=mid-1;
        else s=mid+1;
    }
    if(a==0)cout<<"element not found";
}