#include<bits/stdc++.h>
using namespace std;
int main(){ // Binary search ... Algorithm use to search the element...
    int x;
    cout<<"enter x : ";
    cin>>x;
    int t;
    vector<int>v(x);
    for(int i=0;i<x;i++){ // time  complexicity is o(log(n))...
        cin>>v[i];
    }
    cout<<"enter target : ";
    cin>>t;
    int s = 0;
    int e = x-1;
    int a = 0;
    while(s<=e){
        int mid = (s+e)/2;
        if(v[mid]==t){
            a = 1;
            cout<<"target value index is : "<<mid;
            break;
        }
        else if(v[mid]<t)s=mid+1;
        else e = mid - 1;
    }
    if(a==0)cout<<"target value is not present in the array";
}