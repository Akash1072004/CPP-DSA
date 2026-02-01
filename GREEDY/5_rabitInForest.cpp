#include<bits/stdc++.h>
using namespace std;
int numRabbits(vector<int>& v) {
    for(int i = 0;i<v.size();i++){ // rabbit in the Forest ...
        v[i]+=1;
    }
    unordered_map<int,int>m;
    for(int i = 0;i < v.size(); i++){
        m[v[i]]++;
    }
    int sum = 0;
    for(auto ele : m){
        if(ele.first==1)sum += ele.second;
        else {
            if(ele.second < ele.first)sum += ele.first;
            else {
                double a = ((ele.second*1.0)/(ele.first*1.0));
                int b = ele.second/ele.first;
                if(a==b)sum += b*ele.first;
                else sum += ele.first*(b+1);
            }
        }
    }
    return sum;
}
int main(){
    vector<int>v = {0,0,1,1,1};
    cout << numRabbits(v);
}