#include<bits/stdc++.h>
using namespace std;
string pmc(int x,int k,string s,string ans,int idx){
    if(x==0){
        return ans;
    }
    int fac = 1;
    for(int i=2;i<=x-1;i++){
        fac=fac*i;
    }
    idx=k/fac;
    if(k%fac==0)idx--;
    int q = 1;
    if(k%fac==0)q=fac;
    else q=k%fac;
    return pmc(x-1,q,s.substr(0,idx)+s.substr(idx+1),ans+s[idx],idx);
}
int main(){ // permutation sequence ...
    int x,k;
    cin>>x>>k;
    string s = "";
    string ans = "";
    for(int i=1;i<=x;i++){
        s=s+to_string(i);
    }
    ans = pmc(x,k,s,ans,0);
    cout<<ans;
}