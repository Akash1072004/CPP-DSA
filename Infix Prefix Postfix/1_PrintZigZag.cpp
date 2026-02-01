#include<bits/stdc++.h>
using namespace std;
void pip(int n){
    if(n==0)return;
    cout<<"pre "<<n<<endl;//Pre...
    pip(n-1);
    cout<<"In "<<n<<endl;//In...
    pip(n-1);
    cout<<"post "<<n<<endl;//Post...
}
int main(){
    pip(3);
}