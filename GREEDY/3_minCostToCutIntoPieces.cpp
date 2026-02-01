#include<bits/stdc++.h>
using namespace std;
int f(int m,int n,vector<int>&x,vector<int>&y){
    sort(x.begin(),x.end(),greater<int>());
    sort(y.begin(),y.end(),greater<int>());
    int h = 1;
    int v = 1;
    int i=0,j=0;
    int cost = 0;
    while(i<x.size() && j<y.size()){
        if(x[i]>y[j]){
            cost += x[i]*h;
            v++;
            i++;
        }
        else {
            cost += y[j]*v;
            h++;
            j++;
        }
    }
    if(i==x.size()){
        while(j<y.size()){
            cost += y[j]*v;
            j++;
        }
    }
    if(j==y.size()){
        while(i<x.size()){
            cost += x[i]*h;
            i++;
        }
    }
    return cost;
}
int main(){
    int m = 6,n = 4;
    vector<int>x = {2,1,3,1,4};
    vector<int>y = {4,1,2};
    cout << f(m,n,x,y);
}