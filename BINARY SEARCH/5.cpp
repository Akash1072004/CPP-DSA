#include<bits/stdc++.h>
using namespace std;
int main(){  // missing element in sorted array from 0 to n in binary search...
    int x;
    cout<<"enter x : ";
    cin>>x;
    vector<int>v(x);
    for(int i=0;i<x;i++){ 
        cin>>v[i];
    }
    int s = 0;
    int e = x-1;
    while(s<=e){
       int mid=(s+e)/2;
        if(v[mid]!=mid){
            if(mid==0){
                cout<<"missing element : "<<mid;
                break;
            }
            else if(v[mid-1]==mid-1){
                cout<<"missing element : "<<v[mid-1]+1;
                break;
            }
            else e=mid-1;
        }
        else if(v[mid]==mid)s=mid+1;
    }
}