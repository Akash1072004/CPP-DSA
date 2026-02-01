#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int x,y;
float a,b;
double second(vector<int>&v,vector<int>&v1){
    for(int i=0;i<v1.size();i++){
        int b=v1[i];
        v.push_back(b);
    }
    sort(v.begin(),v.end());
    int m=v.size();
     a=v[m/2];
     b=(v[m/2-1]+v[m/2])/2.0;
     if(m%2!=0) return a;
     else return b;
}
int main(){
    cout<<"enter x : ";
    cin>>x;
    vector<int>v(x);
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    cout<<"enter y : ";
    cin>>y;
    vector<int>v1(y);
    for(int i=0;i<y;i++){
        cin>>v1[i];
    }
    float c= second(v,v1);
    cout<<c;
}