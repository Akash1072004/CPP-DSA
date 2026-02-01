#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cin>>x;
    vector<int>v(x);
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    int s=0;
    int e=x-1;
    int sum = 0;
    while(s<e){
        sum = sum + (v[s]+v[e]);
        s++;
        e--;
    }
    if(x%2!=0)cout<<sum+v[x/2];
    else cout<<sum;
}