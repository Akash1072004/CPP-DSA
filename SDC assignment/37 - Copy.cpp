#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cin>>x;
    vector<int>v;
    v.push_back(2);
    for(int i=3;i<x;i++){
        int b=0;
       for(int j=2;j<i;j++){
        if(i%j==0) {
            b=1;
            break;
        }
        else b=0;
       } 
       if(b==0){
        v.push_back(i);
       }
    }
    int a=0;
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
         if(v[i]+v[j]==x){cout<<v[i]<<" "<<v[j]<<endl;
         a=1;
         }
        }
    }
    if(a==0)cout<<"this number is not the sum of two prime number";
    
}