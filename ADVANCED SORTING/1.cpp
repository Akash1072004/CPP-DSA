#include<bits/stdc++.h>
using namespace std;
void Merge(vector<int>&a,vector<int>&b,vector<int>&ans){
    int n1 = a.size();
    int n2 = b.size(); // merge sort...
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]) ans[k++]=a[i++];
        else ans[k++]=b[j++];
    }
    if(i==a.size()){
        while(j<b.size()){
            ans[k++]=b[j++];
        }
    }
    else {
        while(i<a.size()){
            ans[k++]=a[i++];
        }
    }
}
void mergeSort(vector<int>&v){
    int n = v.size();
    if(n==1)return;
    int n1=n/2,n2=n-(n/2);
    vector<int>a(n1),b(n2);
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
    }
    mergeSort(a);
    mergeSort(b);
    // merge above two arrays...
    Merge(a,b,v);
    // now delete extra space
    a.clear();
    b.clear(); 
}
int main(){ 
    int x;
    cin>>x;
    vector<int>v(x);
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    mergeSort(v);
    for(int i=0;i<x;i++){
        cout<<v[i]<<" ";
    }
}