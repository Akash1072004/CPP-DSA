#include<bits/stdc++.h>
using namespace std;
int findIdx(vector<int>&v,int s,int e){
    int x = v.size();
    int count = 0;
    int pivotElement = v[s];
    for(int i=s+1;i<=e;i++){ // quick sort...
        if(v[i]<pivotElement)count++;
    }
    int pi = count + s;
    swap(v[pi],v[s]);
    int i = s;
    int j = e; 
    while(i<pi && j>pi){
        if(v[i]>pivotElement && v[j]<pivotElement){
            swap(v[i],v[j]);
            i++;
            j--;
        }
        else if(v[i]<=pivotElement)i++;
        else j--;
    }
    return pi;
} // 5 1 8 2 7 6 3 4
void quickSort(vector<int>&v,int s,int e){
    if(s>=e)return;
    int x = v.size();
    int pi = findIdx(v,s,e);
    // recursion to do same thing...
    quickSort(v,pi+1,e);
    quickSort(v,s,pi-1);
}
int main(){
    int x;
    cin>>x;
    vector<int>v(x);
    for(int i=0;i<x;i++){
         cin>>v[i];
    }
    quickSort(v,0,x-1);
    for(int i=0;i<x;i++){
         cout<<v[i]<<" ";
    }
}