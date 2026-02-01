#include<bits/stdc++.h>
using namespace std;
int binary_decimal(string s){
    int sum=0;
    int n=s.size();
    for(int i=0;i<s.size();i++){
        int num=s[i]-'0';
        sum+=num<<(n-i-1);   // mean nums*(1<<(n-i-1)) which is nums*2 to pow (n-i-1);
    }
    return sum;
}
int main(){
    string s;
    cin>>s;
    cout<<binary_decimal(s);
}