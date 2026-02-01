#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int x;
    cin>>x;
    vector<int>v(x);
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    cout<<endl;
    sort(v.begin(),v.end());
    cout<<"ascending order is ";
    cout<<endl<<endl;
    for(int i=0;i<x;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl<<endl;
      cout<<"descending order is";
      cout<<endl<<endl;
     for(int i=x-1;i>=0;i--){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    }