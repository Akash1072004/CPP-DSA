#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cout<<"enter x : ";
    cin>>x;
    int t;
    vector<int>v(x);
    for(int i=0;i<x;i++){ // lower bound...
        cin>>v[i];
    }
    cout<<"enter target : ";
    cin>>t;
    int s = 0;
    int e = x-1;
    while(s<=e){ 
        int mid = (s+e)/2;
        if(v[mid]<t && v[mid+1]>t){
            cout<<"lower bound is "<<v[mid];
            break;
        }
        else if(v[mid]>t)e=mid-1;
        else s = mid+1;
    }
    // this can also be done if this loop end then high < low mean s>e then simply print v[h] for lower bound
}