#include<bits/stdc++.h>
using namespace std;
string count_say(int x){
    if(x==1)return "1";
    string s = count_say(x-1);
    string t = "";
    int freq = 1;
    char dh = s[0];
    for(int i=1;i<s.size();i++){
        char ch = s[i];
        if(ch==dh) freq++;
        else {
            t = t + (to_string(freq)+dh);
            freq = 1;
            dh = ch;
        }
    }
    t = t + (to_string(freq)+dh);
    return t;
}
int main(){ // count and say...Leetcode 38...
    int x;
    cin>>x;
    cout<<count_say(x);
}