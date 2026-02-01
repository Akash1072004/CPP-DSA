#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={3,-4,-7,30,7,-9,2,1,6,-1};
    int k = 3;
    for(int l=0;l<v.size();l++){
        cout<<v[l]<<" ";
    }
    cout<<endl;
    queue<int>q;
    for(int l=0;l<v.size();l++){
        if(v[l]<0)q.push(l);
    }
    vector<int>ans;
    int i=0,j=k-1;
    while(j<v.size()){
        while(q.front()<i)q.pop();
        if(q.front()<=j && q.front()>=i)ans.push_back(v[q.front()]);
        else if(q.front()>j)ans.push_back(0);
        i++;
        j++;
    }
    for(int l=0;l<ans.size();l++){
        cout<<ans[l]<<" ";
    }
}