#include<bits/stdc++.h>
using namespace std;
int numSubarrayProductLessThanK(vector<int>& v, int k) {
        if(k<=1)return 0;
        int x=v.size(); // leetcode 713...
        int i=0,j=0;
        int count=0;
        int p=1;
        while(i<x){
            while(j<x && (p*v[j])<k){
                p*=v[j++];
            }
            count+=j-i;
            if(i<j)p=p/(v[i]);
            else j=i+1;
            i++;
        }
        return count;
    }
int main(){
    vector<int>v = {57,44,92,28,66,60,37,33,52,38,29,76,8,75,22};
    int k;
    cout<<"enter k : ";
    cin>>k;
    cout<< numSubarrayProductLessThanK(v,k);
}