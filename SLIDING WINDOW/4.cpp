#include<bits/stdc++.h>
using namespace std;
int minSubArrayLen(int t, vector<int>& v) {
        int x=v.size(); // leetcode 209...
        int sum=0;
        int ml=INT_MAX;
        int i=0,j=0;
        while(j<x){
            sum+=v[j];
            while(sum>=t){
                ml=min(ml,j-i+1);
                sum-=v[i++];
            }
             j++;
        }
        if(ml==INT_MAX)return 0;
        else return ml;


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
    cout<< minSubArrayLen(t,v);
}