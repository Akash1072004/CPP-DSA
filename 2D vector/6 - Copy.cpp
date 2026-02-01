#include <iostream>
#include<vector>//pascal triangle...
using namespace std;
int main(){
  int x;
  cin>>x;
  vector<vector<int>>v;
  for(int i=0;i<x+1;i++){
    vector<int>v1(i+1);
    v.push_back(v1);  
    for(int j=0;j<i+1;j++){
        if(j==0 || j==i)v[i][j]=1;
        else v[i][j]=v[i-1][j-1] + v[i-1][j];
    }
  }

  for(int i=0;i<x+1;i++){
    for(int j=0;j<i+1;j++){
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
    // cout<<v[x][i]<<" ";
  }
}
