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
        if(v[s]%2==0)sum = sum + v[s];
        if(v[e]%2==0)sum = sum + v[e];
        s++;
        e--;
    }
    if(x%2!=0){
        if(v[x/2]%2==0)sum=sum+v[x/2];
    }
    cout<<"sum of the even numbers are "<<sum;
}