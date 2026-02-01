#include<bits/stdc++.h>
using namespace std;
string pmc(string s,string t,int n,int k,int idx){
   if(n==0)return t;
    int fac = 1;
    for(int i=2;i<=n-1;i++){
        fac=fac*i;
    }
    idx = k/fac;
    if(k%fac==0)idx--;
    int q = 1;
    if(k%fac==0)q=fac;
    else q=k%fac;
    return pmc(s.substr(0,idx)+s.substr(idx+1),t+s[idx],n-1,q,idx);
}
int main(){
    string s;
    cin>>s;
    int k;
    cin>>k;
    int n = s.size();
    string t = "";
    t = pmc(s,t,n,k,0);
    cout << t;
}