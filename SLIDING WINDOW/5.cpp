#include<bits/stdc++.h>
using namespace std;
 int longestOnes(vector<int>& v, int k) {
        int x=v.size();
        int i=0,j=0;
        int ml=0;
        while(j<x){
          if(v[j]==1)j++;
          else if(v[j]==0){ // leetcode 1004...
            if(k!=0){
                k--;
                j++;
            }
            else {
                ml=max(ml,j-i);
                while(v[i]!=0)i++;
                i++;
                j++;
            }
          }
          ml=max(ml,j-i);
        }
        return ml;
    }
int main(){
    int x;
    cin>>x;
    vector<int>v(x);
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    int k;
    cout<<"enter k : ";
    cin>>k;
    cout<< longestOnes(v, k);
}