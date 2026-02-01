#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x,y,z;
    cin>>x;
    vector<int>v(x);
    for(int i=0;i<x;i++){//basically this is for print reverse number of given array
        cin>>v[i];
    }
    cout<<endl;
    cout<<"from where to where you want to reverse"<<endl;
    cout<<"from ";
    cin>>y;
    cout<<"to ";
    cin>>z;
    for(int i=0;i<y;i++){
        cout<<v[i]<<" ";
    }
    
       for(int j=z;j>=y;j--){
        cout<<v[j]<<" ";
       }
       for(int i=z+1;i<x;i++){
        cout<<v[i]<<" ";
       }
       
    
}