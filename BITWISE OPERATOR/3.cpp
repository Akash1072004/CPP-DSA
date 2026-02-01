#include<bits/stdc++.h>
using namespace std;
string decimal_Binary(int x){
    string s;
    while(x!=0){ // Decimal To Binary...
        if(x%2==0) s='0'+ s;
        else s='1'+ s;
        x=x/2;
    }
    return s;
}
int main(){
    int x;
    cin>>x;
    cout<<decimal_Binary(x);
}