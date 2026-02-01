#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&v , int &count){
    int n = v.size();
    if(n==1) return;
    int n1 = n/2;
    int n2 = n-(n/2);
    vector<int>a(n1),b(n2),c(n2),d(n1);
    for(int i=0;i<n1;i++){
        a[i]=v[i];
        d[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
        c[i]=v[i+n1];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int i = 0,j=0;
    int q = 0;
    while(i<a.size() && j<b.size()){
        q=a.size()-i;
        if(a[i]>b[j]){
             count=count+q;
             j++;
        }
        else i++;
    }
    merge(c,count);
    merge(d,count);
}
int main(){
    int x; // 5 3 2 8 1 0 5  ans = 4 + 3 + 2 + 3 + 1 = 13
    cin>>x;          //   5 3 2   8 1 0 5 split 
    vector<int>v(x); //   2 3 5   0 1 5 8 sort and further do same with both part...
    for(int i = 0;i<x;i++){
        cin>>v[i];
    }
    int count=0;
    merge(v,count);
    cout<<count;
}