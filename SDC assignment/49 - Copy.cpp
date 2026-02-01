#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int x;
    cin>>x;
    vector<int>v(x);
    int a=0;
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i=0;i<x-1;i++){
        a=0;
        if(v[i]==v[i-1])continue;
        else {
            for(int j=i+1;j<x;j++){
            if(v[i]==v[j])a=1;
            break;
        }
        }
        if(a==0){
            cout<<"single one is "<<v[i];
            break;
        }
    }
}