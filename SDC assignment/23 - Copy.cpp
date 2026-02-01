#include<iostream>
#include<vector>
using namespace std;
    int x;
void rain(vector<int>&v){
  vector<int>v1(x);

  int max = v[0];
  for(int i=0;i<x;i++){
    v1[i]=max;
    if(max<v[i])max = v[i];
  }
  // for(int i=0;i<x;i++){
  //   cout<<v1[i]<<" ";
  // }
  // cout<<endl;
  vector<int>v2(x);
  int m2=v[x-1];
  for(int i=x-1;i>=0;i--){
        v2[i]=m2;
        if(m2<v[i])m2 = v[i];
  }
  // for(int i=0;i<x;i++){
  //   cout<<v2[i]<<" ";
  // }
  // cout<<endl;
  vector<int>v3(x);
  for(int i=0;i<x;i++){
    if(v1[i]<v2[i])v3[i]=v1[i];
    else v3[i]=v2[i];
  }
  // for(int i=0;i<x;i++){
  //   cout<<v3[i]<<" ";
  // }
  // cout<<endl;
  int c;
  int b=0;
  for(int i=1;i<x-1;i++){
    if(v3[i]>v[i])c=v3[i]-v[i];
    else continue;
    b=b+c;
  }
  cout<<"total number of blocks of water is "<<b;
}
int main(){
    cout<<"enter x : ";
    cin>>x;
    vector<int>v(x);
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    rain(v);
}