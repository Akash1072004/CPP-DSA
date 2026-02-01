#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    vector<int>v(x);
    for(int i=0;i<x;i++){ // Sliding window...use when subarray, large/small sum...
        cin>>v[i];
    }
    int k;
    cout<<"enter size of subarray : ";
    cin>>k;
    int ps = 0;
    for(int i=0;i<k;i++){
        ps+=v[i];
    }
    int i=1,j=k,maxsum=INT_MIN,sum=0;
    while(j<x){
        sum=ps+v[j++]-v[(i++)-1];
        maxsum=max(maxsum,sum);
        ps=sum;
    }
    cout<<maxsum;
}