#include <bits/stdc++.h>
using namespace std;
class Solution {
public: 
    // Method 1 
    int f(string &s, int i, int j, int isTrue){
        if(i > j) return 0;
        if(i == j){
            if(isTrue) return s[i] == 'T';
            else return s[i] == 'F';
        }
        int ways = 0;
        for(int k = i+1; k < j; k += 2){
            int lt = f(s, i, k-1, 1);
            int rt = f(s, k+1, j, 1);
            int lf = f(s, i, k-1, 0);
            int rf = f(s, k+1, j, 0);

            if(s[k] == '&'){
                if(isTrue) ways += (lt*rt);
                else ways += (lt*rf) + (rt*lf) + (lf*rf);
            }
            if(s[k] == '|'){
                if(isTrue) ways += (lt*rt) + (lt*rf) + (lf*rt);
                else ways += lf*rf;
            }
            if(s[k] == '^'){
                if(isTrue) ways += (lt*rf) + (rt*lf);
                else ways += (lt*rt) + (lf*rf);
            }
        }
        return ways;
    }
    int countTrue(string s) {
        // Your code goes here
        int n = s.size();
        return f(s, 0, n-1, 1);



    }
};
int main(){

}