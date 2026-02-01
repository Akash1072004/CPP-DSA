#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>v = {{1,10},{2,7},{3,19},{8,12},{10,20},{11,30}};
    vector<int>s(v.size()),e(v.size());
    for(int i=0;i<v.size();i++){
        s[i]=v[i][0]; // Meeting Room || ...
        e[i]=v[i][1];
    }
    sort(s.begin(),s.end());
    sort(e.begin(),e.end());
    int i =0,j = 0;
    int r = 0,ans = 0;
    while(i<v.size()){
        if(s[i]<e[j]){
            r++;
            i++;
            ans = max(ans,r);
        }
        else if(s[i]>e[j]){
            j++;
            r--;
            ans = max(ans,r);
        }
        else {
            i++;
            j++;
        }
    }
    cout << ans;
}