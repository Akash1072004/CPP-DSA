#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool f(vector<int>& v, int i, vector<int>& d){
        int n = v.size();
        if(n == 0) return true;
        vector<int> v1 = v;
        sort(v1.begin(), v1.end());
        vector<int> total;
        for(int j = 0; j < n; j++){
            if(v[j] == v1[0]) {
                total.push_back(j);
            }
        }
        for(int k = 0; k < n; k++){
            d.push_back(v1[k]);
        }
        int count = 0;
        for(int j = 1; j < n; j++){
            if(v[j] < v[j-1]) count++;
            if(count > 1) return false;
        }
        if(v[0] < v[n-1]) count++;
        if(count > 1) return false;
        return true;
    }
    int sortableIntegers(vector<int>& nums) {
        int n = nums.size();
        vector<int> sortedNums = nums;
        sort(sortedNums.begin(), sortedNums.end());
        int ans = 0; 
        for(int i = 1; i * i <= n; i++){
            if(n % i == 0){
                int a = 0; vector<int> v;
                vector<int> d;
                bool res = true;
                for(int j = 0; j < n; j++){
                    v.push_back(nums[j]);
                    a++;
                    if(a == i) {
                        res = res && f(v, i, d);
                        if(!res) break;
                        a = 0;
                        v.clear();
                    }
                }
                if(sortedNums != d) res = false;
                if(res) ans += i;
                if(n/i != i) {
                a = 0; v.clear();
                d.clear();
                res = true;
                for(int j = 0; j < n; j++){
                    v.push_back(nums[j]);
                    a++;
                    if(a == n/i) {
                        res = res && f(v, n/i, d);
                        if(!res) break;
                        a = 0;
                        v.clear();
                    }
                }
                if(sortedNums != d) res = false;
                if(res) ans += n/i;
            }
            }
        }
        return ans;

        
    }
};
int main(){

}