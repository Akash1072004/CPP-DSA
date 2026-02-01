#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>p1,pair<int,int>p2){ // FractionalKnapsack Problem...
    double r1 = (p1.first*1.0)/(p1.second*1.0);
    double r2 = (p2.first*1.0)/(p2.second*1.0);
    return r1>r2;
}
double fractionalKnapsack(vector<int>&p,vector<int>&w,int ansW){
    int n = p.size();
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        v.push_back({p[i],w[i]});
    }
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<n;i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<endl;
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(v[i].second <= ansW) {
            ans += v[i].first;
            ansW -= v[i].second;
        }
        else {
            ans += ((v[i].first*1.0)/(v[i].second*1.0))*ansW;
            ansW = 0;
            break;
        }
    }
    return ans;
}
int main(){
    vector<int>profit = {60,100,120};
    vector<int>weight = {10,20,30};
    int w = 50;
    cout << fractionalKnapsack(profit,weight,w);
}