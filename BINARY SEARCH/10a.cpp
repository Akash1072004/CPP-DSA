#include<bits/stdc++.h>
using namespace std;
bool isPerfectSq(int y){
    int a = sqrt(y);
    if(a*a==y)return true;
    else return false;
}
bool square(int x){ // square sum...leetcode 633...method 2/less time complexity...
    int s = 0;
    int e = x;
    while(s<=e){
        if(isPerfectSq(s) && isPerfectSq(e))return true;
        else if(!isPerfectSq(e)){
            e=(int)sqrt(e)*(int)sqrt(e);
            s = x-e;
        }
        else {
            s=((int)sqrt(s)+1)*((int)sqrt(s)+1);
            e=x-s;
        }
    }
    return false;
}
int main(){
    int x;
    cin>>x;
    cout<<square(x);
}