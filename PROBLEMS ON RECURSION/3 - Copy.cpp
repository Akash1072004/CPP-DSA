#include<iostream>
#include<string>
using namespace std;
void pmc(string s,string ans){
    if(s.size()==0){
        cout<<ans<<" ";
        return;
    }
    for(int i=0;i<s.size();i++){
        pmc(s.substr(0,i)+s.substr(i+1),ans+s[i]);
    }
}
int main(){ //print all pmc for given string...
    string s;
    cin>>s;
    pmc(s,"");
}