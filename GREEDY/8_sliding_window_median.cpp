#include<bits/stdc++.h>
using namespace std;
vector<double> medianSlidingWindow(vector<int>& v, int k) {
    int leftSize = 0;
    int rightSize = 0;
    vector<double>ans; // LeetCode 480 // Hard // Important Question ...
    priority_queue<int>left; // maxHeap
    priority_queue<int,vector<int>,greater<int>>right; // minHeap
    double median = 0;
    for(int i = 0; i < k; i++){
        if(left.empty() || v[i]<=left.top()){
            left.push(v[i]);
            leftSize++;
        }
        else {
            right.push(v[i]);
            rightSize++;
        }
        if(leftSize - rightSize > 1){
            right.push(left.top());
            left.pop();
            leftSize--;
            rightSize++;
        }
        if(rightSize - leftSize > 0){
            left.push(right.top());
            right.pop();
            leftSize++;
            rightSize--;
        }
    }
    if(leftSize == rightSize) median = ((double)left.top()+(double)right.top())/2.0;
    else if(leftSize > rightSize) median = left.top();
    else median = right.top();
    ans.push_back(median);
    unordered_map<int,int>m;
    for(int i = k; i < v.size(); i++){
        int j = i-k;
        if(v[j]<=median)leftSize--;
        else rightSize--;
        m[v[j]]++;
        while(!left.empty() && m[left.top()] > 0){
            m[left.top()]--;
            left.pop();
        }
        while(!right.empty() && m[right.top()] > 0){
            m[right.top()]--;
            right.pop();
        }
        if(v[i] < median){
            left.push(v[i]);
            leftSize++;
        }
        else {
            right.push(v[i]);
            rightSize++;
        }
        if(leftSize - rightSize > 1){
            right.push(left.top());
            left.pop();
            leftSize--;
            rightSize++;
        }
        if(rightSize - leftSize > 0){
            left.push(right.top());
            right.pop();
            leftSize++;
            rightSize--;
        }
        while(!left.empty() && m[left.top()] > 0){
            m[left.top()]--;
            left.pop();
        }
        while(!right.empty() && m[right.top()] > 0){
            m[right.top()]--;
            right.pop();
        }
        if(leftSize == rightSize)median = ((double)left.top()+(double)right.top())/2.0;
        else if(leftSize > rightSize)median = left.top();
        else median = right.top();
        ans.push_back(median);
    }
    return ans;

}
int main(){
    vector<int>v = {1,3,-1,-3,5,3,6,7};
    int k = 3;
    vector<double>ans = medianSlidingWindow(v,k);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
}