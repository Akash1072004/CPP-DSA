#include<bits/stdc++.h>
using namespace std;
vector<int> longestIncreasingSubsequence(vector<int>& arr) {
    int n = arr.size();
    vector<int> len(n, 1), hash(n);
    int lastIndex = 0, maxi = 0;
    for(int cur = 0; cur < n; cur++){ // this is most optimized approach to print the LIS
        hash[cur] = cur;
        for(int prev = 0; prev < cur; prev++){
            if(arr[cur] > arr[prev] and len[prev]+1 > len[cur]){
                len[cur] = len[prev] + 1;
                hash[cur] = prev;
            }
        }
        if(len[cur] > maxi){
            maxi = len[cur];
            lastIndex = cur;
        }
    }
    vector<int> temp;
    temp.push_back(arr[lastIndex]);
    while(hash[lastIndex] != lastIndex){
        lastIndex = hash[lastIndex];
        temp.push_back(arr[lastIndex]);
    }
    reverse(temp.begin(), temp.end());
    return temp;
}

int main(){
    vector<int> arr = {10, 22, 9, 33, 21, 50, 41, 60, 80};
    vector<int> ans = longestIncreasingSubsequence(arr);

    for(int x : ans) cout << x << " ";
}