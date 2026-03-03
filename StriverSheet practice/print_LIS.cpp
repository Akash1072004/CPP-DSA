#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;
void f(vector<int>& arr, int i, vector<int> temp, int idx){
    if(i == arr.size()) {
        ans.push_back(temp);
        return;
    }
    // Take only if valid
    if(idx == -1 || arr[i] > arr[idx]) {
        temp.push_back(arr[i]);
        f(arr, i+1, temp, i);
        temp.pop_back();
    }
    // Not take
    f(arr, i+1, temp, idx);
}
vector<int> longestIncreasingSubsequence(vector<int>& arr) {
    ans.clear(); // V-V-I for multiple test cases
    f(arr, 0, {}, -1);
    int maxLength = 0;
    for(int i = 0; i < ans.size(); i++){
        maxLength = max(maxLength, (int)ans[i].size());
    }
    for(int i = 0; i < ans.size(); i++){
        if(ans[i].size() == maxLength) return ans[i];
    }
    return {};


}
int main(){
    vector<int> arr = {10, 22, 9, 33, 21, 50, 41, 60, 80};
    vector<int> finalAns = longestIncreasingSubsequence(arr);
    for(int i = 0; i < finalAns.size(); i++){
        cout << finalAns[i] << " ";
    }

}