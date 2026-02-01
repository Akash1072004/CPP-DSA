#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> merge(vector<vector<int>>& v) {
    sort(v.begin(),v.end()); // merge Interval...
    vector<vector<int>>ans;
    ans.push_back(v[0]);
    int idx = 0;
    for(int i=1;i<v.size();i++){
        if(v[i][0]<=ans[idx][1]){
            ans[idx][1] = max(ans[idx][1],v[i][1]);
        }
        else {
            ans.push_back(v[i]);
            idx++;
        }
    }
    return ans;
}
int main(){
    vector<vector<int>>v = {{1,6},{0,2},{3,5}};
    vector<vector<int>>ans = merge(v);
    for(int i = 0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++){
            cout << ans[i][j] << " ";
        }
        cout<<endl;
    }
}