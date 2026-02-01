#include<bits/stdc++.h>
using namespace std;
int kthSmallest(vector<int>&v,int k,int s,int e){
    int x = v.size();
    if(s==e)return v[s];
    int pivotEle=v[s];
    int count = 0;
    for(int i=s+1;i<=e;i++){
        if(v[i]<pivotEle)count++;
    }
    int pi=s+count;
    swap(v[pi],v[s]);
    int i = s;
    int j = e;
    while(i<pi && j>pi){
        if(v[j]<pivotEle && v[i]>pivotEle){
            swap(v[i],v[j]);
            i++;
            j--;
        }
        else if(v[j]>=pivotEle)j--;
        else i++;
    }
    if((pi+1)==k)return v[pi];
    else if((pi+1)<k){
        return kthSmallest(v,k,pi+1,e);
    }
    else return kthSmallest(v,k,s,pi-1);
} // 5 1 8 2 7 6 3 4
int main(){
    int x;
    cin>>x;
    vector<int>v(x);
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    int k;
    cout<<"enter kth smallest ele : ";
    cin>>k;
    cout<<kthSmallest(v,k,0,x-1);
}