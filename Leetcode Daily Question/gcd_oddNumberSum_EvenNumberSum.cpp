#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        
        int oddSum = 0, evenSum = 0;
        oddSum = n*n;
        evenSum = n*(n+1);

        return __gcd(oddSum, evenSum);

    }
};
int main() {

}