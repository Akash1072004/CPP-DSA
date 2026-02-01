#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v = {2,3,1,2,3,3,6,13,13,13,4};
    int n = v.size();
    int count = 0;
    int maxEle = INT_MIN; // Find the maximum subarray length which has max 'and' value ...
    for(int i = 0; i < n; i++){
        if(v[i] > maxEle){
            maxEle = v[i];
            count = 1;
        }
        else if (v[i] == maxEle){
            count++;
        }
    }
    cout << count;
}