#include<iostream>
#include<string>
using namespace std;
void pld(string s,string t,int i){
   if(i==-1){
    if(t==s){
        cout<<t<<endl;
        cout<<"palindrome";
    }
    else cout<<"Not palindrome";
    return;
   }
   pld(s,t+s[i],i-1);
}
int main(){ //check palindrome...
    string s;
    cin>>s;
    int l=s.size()-1;
    pld(s,"",l);
}