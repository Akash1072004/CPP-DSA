#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    vector<int>v(x);
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    vector<int>ans;
    int k;
    cout<<"enter k : ";
    cin>>k;
    int idx=-1;
    for(int i=0;i<k;i++){
        if(v[i]<0){
            ans.push_back(v[i]);
            idx=i;
            break;
        }
    }
    int i=1,j=k;
    while(j<x){
        if(v[i]<0) ans.push_back(v[i]);
        else if(idx>=i && idx<=j) ans.push_back(v[idx]);
        else if(v[j]<0){
            ans.push_back(v[j]);
            idx=j;
        }
        else {
            for(int idx=i;idx<=j;idx++){
                if(v[idx]<0){
                    ans.push_back(v[idx]);
                    break;
                }
            }
        }
        i++;
        j++;
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}