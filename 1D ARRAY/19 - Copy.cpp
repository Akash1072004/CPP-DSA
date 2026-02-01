#include<iostream>
#include<vector>
using namespace std;
int x;
void p(vector<int>v){
    int a = v.size();
    cout<<a<<endl;
    int b = 1;
    for(int i =1;i<=x;i++){
        b=b*i;
    }
    cout<<"factorial is "<<b;
    cout<<"\n you have "<<b<<" choices to form the same array"<<endl;
    for(int i=0;i<b;i++){
        int h=x-1;
         cout<<"(";
        for(int j=0;j<x;j++){
            for(int k=0;k<x;k++){
            swap(v[j],v[h]);
            }
             cout<<v[j]<<",";
        }
        cout<<")";
    }
}
int main(){
    cin>>x;
    vector<int>v(x);
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    p(v);
}