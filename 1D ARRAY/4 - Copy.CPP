#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cin>>x;
    vector<int>v(x);//if we nit initialise the vector v by v(x), then use push_back(something);
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    cout<<endl;
    vector<int>d(x);
    for(int i=0;i<x;i++){
        d[i]=v[x-1-i];
        cout<<d[i]<<" ";
    }
}