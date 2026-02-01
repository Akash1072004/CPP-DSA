#include<bits/stdc++.h>
using namespace std;
void pmc(string &s,int i){
    if(i == s.size()){
        cout << s << " ";
        return ;
    }
    unordered_set<int>s1;
    for(int idx = i; idx < s.size(); idx++){
        if(s1.find(s[idx]) != s1.end()) continue; // check for repeation ...
        else s1.insert(s[idx]); // Pruning step mean that call which i have already taken ... skip ...
        swap(s[i],s[idx]);
        pmc(s,i+1);
        swap(s[i],s[idx]); // BackTracking  ...
    }
}
int main(){
    string s = "aba";
    pmc(s,0);
}