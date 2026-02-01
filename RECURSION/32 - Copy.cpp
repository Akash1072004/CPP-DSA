#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void sub(string s,string t,int i,bool flag){
    if(i==s.length()){
        cout<<t<<" ";
        return;
    }
    if(s[i]==s[i+1]){
       if(flag == true) sub(s,t+s[i],i+1,true);
        sub(s,t,i+1,false);
    }
    else {
       if(flag == true) sub(s,t+s[i],i+1,true);
        sub(s,t,i+1,true);
    }
}
int main(){ // we can use bool flag for repeating element string and print all subsets...
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    sub(s,"",0,true);
}