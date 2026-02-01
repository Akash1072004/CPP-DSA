#include <iostream>
#include<vector>
using namespace std;
int main(){
  int x;
  cin>>x;
  vector<vector<int>>v(x);
 for(int i=0;i<x;i++){
    for(int j=0;j<=i;j++){
       int a=v[i-1][j-1]+v[i-1][j];
       if(j==0 || j==i)v[i].push_back(1);
       else v[i].push_back(a);
    }
  }
  for(int i=0;i<x;i++){
    for(int j=0;j<i+1;j++){
      cout<<v[i][j]<<" ";
    }
    cout<<endl;
  }
}