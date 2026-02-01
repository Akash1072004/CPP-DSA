#include<bits/stdc++.h>
using namespace std;
double prob(int x,vector<double>&p,int i){
    if(x==0)return 1;
    if(i==p.size())return 0;
    return prob(x-1,p,i+1)*p[i]+prob(x,p,i+1)*(1-p[i]);
}
int main(){
    int n = 3; // Problem on probability...
    vector<double>p = {0.3,0.6,0.8};

    cout<<prob((n+1)/2,p,0);
}