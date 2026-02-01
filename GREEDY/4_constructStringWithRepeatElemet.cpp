#include<bits/stdc++.h>
using namespace std;
string f(string &s,int k){
    map<char,int,greater<int>>mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    vector<char>v;
    vector<int>v1;
    for(auto ele : mp){
        v.push_back(ele.first);
        v1.push_back(ele.second);
    }
    for(int i=0;i<v.size();i++){
        cout << v[i]<< " ";
    }
    cout<<endl;
    for(int i=0;i<v1.size();i++){
        cout << v1[i]<< " ";
    }
    string ans  = "";
    cout<<endl;
    int i = 0,j = 1;
    while(i<v.size() && j < v.size()){
        if(v1[i]<=k){
            int a = v1[i];
            while(a--)ans += v[i];
            i = j;
            j++;
        }
        else {
            int a = k;
            while(a--)ans+=v[i];
            ans+=v[j];
            v1[j]--;
            v1[i]-=k;
        }
        if(j<v.size() && v1[j]==0)j++;
    }
    if(j==v.size()){
        if(v1[i]<=k){
            int a = v1[i];
            while(a--)ans += v[i];
            i=j;
        }
        else while(k--)ans += v[i];
    }
    return ans;

    
}
int main(){
    string s = "aababab";
    int k = 2;
    cout << f(s,k);
}