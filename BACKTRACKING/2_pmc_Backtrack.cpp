#include<bits/stdc++.h>
using namespace std;
void pmc(string &s,int i){
    if(i == s.size()){
        cout << s << " ";
        return ;
    }
    for(int idx = i; idx < s.size(); idx++){
        swap(s[i],s[idx]);
        pmc(s,i+1);
        swap(s[i],s[idx]); // BackTrack ...
    }
}
int main(){
    string s = "abc";
    pmc(s,0);
}