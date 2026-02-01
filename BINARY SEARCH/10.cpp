#include<bits/stdc++.h>
using namespace std;
bool square(int x){ // square sum...leetcode 633...
    int q = sqrt(x);
    int s = 0;
    int e = q;
    while(s<=e){
        if((s*s) == x || (e*e) == x || ((s*s)+(s*s))==x || ((e*e)+(e*e))==x || ((s*s)+(e*e))==x)return true;
        else if(((s*s)+(e*e))<x)s++;
        else e--;
    }
    return false;
}
int main(){
    int x;
    cin>>x;
    cout<<square(x);
}