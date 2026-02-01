#include<bits/stdc++.h>
using namespace std;
void brackets(string t,int x,int open,int close){
    if(close==x){
        cout<<t<<endl<<endl;
        return;
    }
    if(open<x)brackets(t+"(",x,open+1,close);
    if(close<open) brackets(t+")",x,open,close+1);
}
int main(){ // print the well ordered "parenthesis ()()" leetcode 22...
    int x;
    cin>>x;
    brackets("",x,0,0);
}//open bracket = "(" shown by "open" variable...
 //close bracket = ")" shown by "close" variable...