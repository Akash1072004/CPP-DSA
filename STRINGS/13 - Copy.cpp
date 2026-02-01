#include<iostream>
#include<string>
using namespace std;
int main(){
    string s ;
    getline(cin,s);
    int a=0;
    int b=s.length();
    if(b==1)cout<<0;
    else if(b==2 && s[0]!=s[1])cout<<1;
    else {
         for(int i=0;i<s.length();i++){
        if(s[i]==' ')continue;
       else if(i==0 && s[0]!=s[1])a++;
        else if(s[i]!=s[i-1] && s[i]!=s[i+1])a++;
        else if(i==b-1 && s[b-1]!=s[b-2])a++;
    }
    cout<<a;
    }
}