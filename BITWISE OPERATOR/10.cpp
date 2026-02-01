#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v = {1,2,1,3,2,4};
    int check = 0;
    for(int i = 0; i < v.size(); i++){ // We have to find the two non repeated numbers from these array by the method that i have used here ...
        check ^= v[i];
    } 
    int k = 0;
    int temp = check;
    while(true){
        if(temp & 1 == 1){ // check the LSB is 0 or 1 ...
            break;
        }
        else {
            k++;
            temp >> 1; 
        }   
    }
    int res = 0;
    for(int i = 0; i < v.size(); i++){
        if((v[i] >> k) & 1 == 1) res ^= v[i]; // check the kth bit is 1 or 0 if 1 then use the XOR operation otherwise continue ...
    }
    cout << res << " "; // Print firstUnique ...
    res ^= check;
    cout << res << " "; // Print SecondUnique ...
}