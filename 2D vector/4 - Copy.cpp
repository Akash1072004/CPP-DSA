#include <iostream>
#include<vector>
using namespace std;
    int x,n;
int ncr(int i,int k){
    int f=1,g=1,h=1;
    for(int j=1;j<=i;j++){
        f=f*j;
    }
    for(int j=1;j<=k;j++){
        g=g*j;
    }
    for(int j=1;j<=(i-k);j++){
        h=h*j;
    }
   n=f/(g*h);
    return n;
}
int main(){
    cout<<"enter the number of rows : ";
    cin>>x;
    vector<vector<int>>v(x);
    for(int i=0;i<x;i++){
        for(int j=0;j<i+1;j++){
            ncr(i,j);
            v[i].push_back(n);
        }
    }
    for(int i=0;i<x;i++){
        // for(int j=1;j<=x-i;j++){
        //     cout<<" ";
        // }
        for(int j=0;j<i+1;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}