#include<bits/stdc++.h>
using namespace std;
vector<int>dp;
int f(vector<int>& nums, int i){
    if(i == nums.size()-1)return 0;
    if(i >= nums.size()) return 1e9;
    if(nums[i] == 0) return 1e9;
    if(nums[i] >= nums.size()-1-i) return 1; // Give more optimization
    if(dp[i] != -1)return dp[i];
    int ans = INT_MAX;
    for(int k = 1; k <= nums[i]; k++){
        ans = min(ans, 1+f(nums, i+k));
    }
    return dp[i] = ans;;
}
int jump(vector<int>& nums) {
    dp.resize(nums.size()+1, -1);
    return f(nums, 0);
}
int main(){
    vector<int> nums = {2,3,1,1,4};
    cout << jump(nums);
}
