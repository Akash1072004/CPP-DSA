#include<bits/stdc++.h>
using namespace std;
int inversion(vector<int>&a,vector<int>&b){
    int count = 0;
    int i = 0,j=0; // count inversion...
    int q = 0;
    while(i<a.size() && j<b.size()){
        q=a.size()-i;
        if(a[i]>b[j]){
             count=count+q;
             j++;
        }
        else i++;
    }
    return count;
}
void Merge(vector<int>&a,vector<int>&b,vector<int>&ans){
    int n1 = a.size();
    int n2 = b.size(); 
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]) ans[k++]=a[i++];
        else ans[k++]=b[j++];
    }
    if(i==a.size()) while(j<b.size()) ans[k++]=b[j++];
    else  while(i<a.size()) ans[k++]=a[i++];
}
void mergeSort(vector<int>&v,int &count){
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
    mergeSort(a,count);
    mergeSort(b,count);
    //count the inversion...
    count = count+inversion(a,b);
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
    int count=0;
    mergeSort(v,count);
    cout<<count;
}