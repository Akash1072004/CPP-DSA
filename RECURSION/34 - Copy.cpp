#include<iostream>
#include<string>
using namespace std;
void pmc(string s,string t,int i){
    if(i==s.length()){
        cout<<t<<" ";
        return;
    }
   for(int j=0;j<s.length();j++){
     pmc(s,t+s[j],i+1);
   }
}
int main(){
    string s;
    cin>>s;
    pmc(s,"",0);
}