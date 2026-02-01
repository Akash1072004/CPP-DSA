#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s ;
    getline(cin,s);
    int x=s.length();
    int i=0;
    int h=x-1;
    while(i<h){
        int j=i+1;
     while(j<=h){
         if(int(s[i])>int(s[j])){
        char temp = s[j];
        s[j]=s[i];
        s[i]=temp;

        
        j++;
       }
       else j++;
      }
      i++;
    }
   cout<<s;
}