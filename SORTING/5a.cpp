#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cout<<"enter no. of children : ";
     cin>>x;
    vector<int>v(x);
    for(int i=0;i<x;i++){ // assign cookies...
        cin>>v[i];
    }
    int y;
    cout<<"enter no. of cookies : ";
    cin>>y;
    vector<int>v1(y);
    for(int i=0;i<y;i++){
        cin>>v1[i];
    }
    sort(v.begin(),v.end());
    sort(v1.begin(),v1.end());
    int count = 0;
    int a = -1;
    for(int i=0;i<y;i++){
        if(v1[i]>=v[0]){
            a = i;
            break;
        }
    }
    if(a == -1)count = 0;
    else {
        int child = 0;
    int cookies = a;
    while(child<x && cookies<y){
        if(v1[cookies]>=v[child]){
            cookies++;
            child++;
            count++;
        }
        else cookies++;
    }
    }
cout<<"number of children is "<<count;
}