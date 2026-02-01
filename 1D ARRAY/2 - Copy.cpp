#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x,y;
    cin>>x;
    vector<int>v(x);
    for(int i=0;i<x;i++){ //we can use here by v.size() in place of x in i<x that is {i < v.size()};
        cin>>v[i];
    }
    cout<<"which element of index you want to find"<<endl;
    cin>>y;
    cout<<endl;
    int a;

    for(int i=0;i<x;i++){ //we can use it also by using loop from last;
        if(v[i]==y) a=i;
    }  
    cout<<a;  
}