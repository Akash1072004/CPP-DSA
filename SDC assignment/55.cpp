#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    vector<int>v(x);
    vector<int>a;
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i=0;i<x;i++){
        if(i==x-1 || v[i]!=v[i+1])a.push_back(v[i]);
    }
    vector<int>b(a.size(),0);
    int count = 1,j=0,m=0;
    for(int i=1;i<x;i++){
        if(v[i]==v[i-1])count++;
        else {
            b[j++]=count;
            m=max(m,count);
            count = 1;
        }
    }
    m=max(m,count);
    b[j]=count;
    cout<<"max frequency elements are : "<<endl;
    for(int i=0;i<b.size();i++){
        if(b[i]==m)cout<<a[i]<<" ";
    }
}