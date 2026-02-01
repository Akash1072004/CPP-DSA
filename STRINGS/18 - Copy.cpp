#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>  //use for print all words of given sentences...
using namespace std;
int main(){
   string s;
   getline(cin,s);
    string temp;
    stringstream ss(s);
    while(ss>>temp){
        cout<<temp<<endl;
    }
}