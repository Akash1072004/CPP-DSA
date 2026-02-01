#include<bits/stdc++.h>
using namespace std;
int maxSatisfy(vector<int>&v){
int x = v.size(); // leetcode 1402... recucing dishes...solved by suffix method...
    sort(v.begin(),v.end()); 
    vector<int>suf(x);
    suf[x-1]=v[x-1];
    for(int i=x-2;i>=0;i--){
        suf[i]=suf[i+1]+v[i]; // 1  2 3 4 
    }                         // 10 9 7 4
    int idx = -1;
    for(int i=0;i<x;i++){
        cout<<suf[i]<<" "; 
    }  
    cout<<endl;
    for(int i=0;i<x;i++){
        if(suf[i]>=0){
            idx=i;
            break;
        }
    }
    if(idx==-1)return 0;
    int sum = 0;
    int a = 1;
    for(int i=idx;i<x;i++){
        sum=sum+(a*v[i]);
        a++;
    }
    return sum;
}
int main(){
    int x;
    cin>>x;
    vector<int>v(x);
    for(int i=0;i<x;i++){ 
        cin>>v[i];      
    }
    cout<<maxSatisfy(v);
}