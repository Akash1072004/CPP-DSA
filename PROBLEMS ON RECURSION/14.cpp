#include<bits/stdc++.h>
using namespace std;
int kth_symbol(int x,int k){
    if(x==1)return 0;
   if(k%2==0){ // even // value flip...
    int preAns = kth_symbol(x-1,k/2);
    if(preAns == 0)return 1;
    else return 0;
   }
   else return kth_symbol(x-1,(k/2)+1); // odd // value same...
}
int main(){ // print kth symbol, either 0 or 1...leetcode 779 ...
    int x;
    cout<<"enter number of lines(rows) : ";
    cin>>x;
    int k;
    cout<<"enter kth term : ";
    cin>>k;
    string s;
    s = "01";
   cout<< kth_symbol(x,k);
}