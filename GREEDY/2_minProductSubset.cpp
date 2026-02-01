#include<bits/stdc++.h>
using namespace std;
int minProductSubset(vector<int>&v){
    sort(v.begin(),v.end());
    int ans = 1;
    if(v[0]==0)ans = 0;
    else if(v[0]<0){
        int ne = 0;
        for(int i=0;i<v.size();i++){
            if(v[i]<0)ne++;
            if(v[i]>=0)break;
        }
        if(ne%2==0){
            for(int i=0;i<v.size();i++){
                if(i+1 < v.size() && v[i] < 0 && v[i+1] >= 0) continue;
                if(v[i]==0)continue;
                else ans *= v[i];
            }
        }
        else {
            for(int i=0;i<v.size();i++){
                if(v[i]!=0)ans *= v[i];
            }
        }
    }
    else {
        ans = v[0];
    }
    return ans;
}
int main(){
    vector<int>v = {-2,-3,1,4,-2,-5};
    cout << minProductSubset(v);
}