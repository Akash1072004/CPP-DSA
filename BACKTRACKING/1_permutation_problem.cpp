#include<bits/stdc++.h>
using namespace std;
void pmc(string s,string t){
    if(s.size() == 0){
        cout << t << " ";
        return;
    }
    for(int i = 0; i < s.size(); i++){
        pmc(s.substr(0,i)+s.substr(i+1),t+s[i]);
    }
}
int main(){
    string s = "abc";
    pmc(s,"");
}