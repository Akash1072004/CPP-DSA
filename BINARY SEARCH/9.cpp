#include<bits/stdc++.h>
using namespace std;
vector<int> f(vector<int>&v,int k,int x,vector<int>ans){
    int y = v.size(); // find k closet element from x...
    int s = 0;
    int e = y-1;
    int a = 0;
    int b = 0;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(v[mid]==x){
            ans.push_back(v[mid]);
            k--;
            int p = mid-1;
            int q = mid+1;
            while(k!=0){
                if(p>=0 && q<=y-1){
                    if((x-v[p])<=(v[q]-x)){
                    ans.push_back(v[p--]);
                    k--;
                }
                else {
                    ans.push_back(v[q++]);
                    k--;
                }
                }
                else if(p<0){
                    ans.push_back(v[q++]);
                    k--;
                }
                else {
                    ans.push_back(v[p--]);
                    k--;
                }
            }
            a = 1;
            b=1;
            break;
        }
        else if(v[mid]<x)s=mid+1;
        else e = mid - 1;
        if(a==1)break;
    }
    if(b==0){
    int t = e;
    int u = s;
    while(k!=0){
         if(t>=0 && u<=y-1){
                    if((x-v[t])<=(v[u]-x)){
                    ans.push_back(v[t--]);
                    k--;
                }
                else {
                   ans.push_back(v[u++]);
                    k--; 
                }
                }
                else if(t<0){
                   ans.push_back(v[u++]);
                   k--;  
                }
                else {
                    ans.push_back(v[t--]);
                    k--;  
                }
    }
    }
    sort(ans.begin(),ans.end());
    return ans;
}
int main(){
    int y;
    cin>>y;
    vector<int>v(y);
    for(int i=0;i<y;i++){
        cin>>v[i];
    }
    int x,k;
    cout<<"enter x and k : ";
    cin>>x>>k;
    vector<int>ans;
    ans = f(v,k,x,ans);
     for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}