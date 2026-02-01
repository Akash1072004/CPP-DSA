#include<bits/stdc++.h>
using namespace std;
int main(){ // first and last occourence element...
    int x;
    cout<<"enter x : ";
    cin>>x;
    int t;
    vector<int>v(x);
    for(int i=0;i<x;i++){ 
        cin>>v[i];
    }
    cout<<"enter t : ";
    cin>>t;
    int s = 0;
    int e = x-1;
    int a = 0;
    int b = 0;
    while(s<=e){
        int mid = s + (e - s) / 2;
        if(v[mid]==t){
            a=1;
            if(mid==0){
                cout<<"first occ idx : "<<mid<<endl;
                break;
            }
            else if(v[mid-1]==t)e=mid-1;
            else {
                cout<<"first occ idx : "<<mid<<endl;
                break;
            }
        }
        else if(v[mid]<t)s=mid+1;
        else e=mid-1;
    }
    if(a==0){
        cout<<"element not found";
    }
    else {
        s = 0;
        e = v.size()-1;
        while(s<=e){
        int mid = s + (e - s) / 2;
        if(v[mid]==t){
            if(mid==v.size()-1){
                cout<<"last occ idx : "<<mid;
                break;
            }
            else if(v[mid+1]==t)s=mid+1;
            else {
                cout<<"last occ idx : "<<mid;
                break;
            }
        }
        else if(v[mid]>t)e=mid-1;
        else s=mid+1;
    }
    }
}