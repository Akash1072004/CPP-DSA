#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    vector<int>v(x);
    for(int i=0;i<x;i++){ // 1 2 3 4 5    1  2  3 4
        cin>>v[i];       //  1 1 2 6 24   24 12 4 1
    }
    vector<int>pre(x),suf(x); // leetcode 238...
    pre[0]=1,suf[x-1]=1;
    for(int i=1;i<x;i++){
        pre[i]=v[i-1]*pre[i-1];
    }
    for(int i=x-2;i>=0-1;i--){
        suf[i]=v[i+1]*suf[i+1];
    }
    for(int i=0;i<x;i++){
        v[i]=suf[i]*pre[i];
    }
    for(int i=0;i<x;i++){
        cout<<v[i]<<" ";
    }
}