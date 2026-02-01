#include<iostream>
#include<string>
using namespace std;
void remove(string s,string t,char ch,int i){
   if(i==s.length()){
    cout<<t;
    return;
   }
   if(s[i]==ch)remove(s,t,ch,i+1);
   else remove (s,t+s[i],ch,i+1);
}
int main(){   //remove the char from given string by recursion...
    string s;
    getline(cin,s);
    char ch;
    cout<<"enter char you want to remove : ";
    cin>>ch;
    int i=0;
    remove(s,"",ch,i);
}