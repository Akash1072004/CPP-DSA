#include<bits/stdc++.h>
using namespace std;
int rotate(vector<int>&v,int t){ // search element in rotated array...
    int x = v.size();
    // 3 4 5 6 7 0 1 2   0 1 2 3 4 5 6 7   5 6 7 0 1 2 3 4  4 5 6 7 0 1 2  
   if(x==1){
    if(v[0]==t)return 0;
    else return -1;
   }
   else if(x==2){
    if(t==v[0])return 0;
    else if(t==v[1])return 1;
    else return -1;
   }  
   else {
    int s = 0;
    int e = x-1;
    int pivot = -1;
    if(v[0]<v[x-1]){
        s = 0;
        e = x - 1;
        while(s<=e){ 
            int mid = s+(e-s)/2;
            if(v[mid]==t)return mid;
            else if(v[mid]<t)s=mid+1;
            else e = mid - 1;
        }
        return -1;
    }
    else {
    while(s<=e){ 
        int mid = s+(e-s)/2;
        if ((mid == 0 || v[mid] < v[mid - 1]) && (mid == x - 1 || v[mid] < v[mid + 1])){
            if(v[mid]==t)return mid;
            else pivot = mid;
            break;
        }
        else if(v[mid]<v[e])e=mid-1;
        else s = mid+1;
    }
        if(t>=v[0]){
        s = 0;
        e = pivot - 1;
        while(s<=e){ 
            int mid = s+(e-s)/2;
            if(v[mid]==t)return mid;
            else if(v[mid]<t)s=mid+1;
            else e = mid - 1;
        }
    }
    else {
        s = pivot + 1;
        e = x-1;
        while(s<=e){ 
            int mid = s+(e-s)/2;
            if(v[mid]==t)return mid;
            else if(v[mid]<t)s=mid+1;
            else e = mid - 1;
        }
    }
  }
   }
    return -1;
}
int main(){
    int x;
    cin>>x;
    vector<int>v(x);
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    int t;
    cout<<"enter target : ";
    cin>>t;
    cout<<rotate(v,t);
}