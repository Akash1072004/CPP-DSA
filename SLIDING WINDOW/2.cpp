#include<bits/stdc++.h>
using namespace std;
int maxSatisfied(vector<int>& c, vector<int> &v, int m) {
        int x=v.size();
        int ps=0;
        for(int i=0;i<m;i++){ // Grumpy Bookstore leetcode 1052...
            if(v[i]==1)ps+=c[i];
        }
        int maxSum=ps;
        int idx = 0;
        int i=1,j=m;
        while(j<x){
            ps=ps-(v[i-1]==1 ? c[i-1]: 0)+(v[j]==1  ? c[j] : 0);
            if(maxSum<ps){
                maxSum=ps;
                idx=i;
            }
            i++;
            j++;
        }
        for(int i=idx;i<idx+m;i++){
            v[i]=0;
        }
        int ans=0;
        for(int i=0;i<x;i++){
           if(v[i]==0)ans+=c[i];
        }
        return ans;
        
        
}
int main(){
    int x;
    cin>>x;
    vector<int>c(x);
    for(int i=0;i<x;i++){
        cin>>c[i];
    }
    vector<int>v(x);
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    int m;
    cout<<"enter minutes : ";
    cin>>m;
    cout<<maxSatisfied(c,v,m);
}