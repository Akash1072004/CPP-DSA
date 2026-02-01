#include<iostream>
#include<vector>
using namespace std;//flipping the matrix...
int main(){
     int x,y;
  cout<<"enter the number of rows : ";
  cin>>x;
  cout<<"enter the number of cols : ";
  cin>>y;
  vector<vector<int>>v(x,vector<int>(y));
  for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
        cin>>v[i][j];
    }
  }
  for(int i=0;i<x;i++){
    if(v[i][0]==0){
        for(int j=0;j<y;j++){
       if(v[i][j]==0) v[i][j]=1;
           else v[i][j]=0;
    }
    }
  }
  cout<<endl<<"output"<<endl;
  for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
  }
    for(int j=0;j<y;j++){
  int a=0,b=0;
       for(int i=0;i<x;i++){
        if(v[i][j]==1)a++;
        else b++;
    }
    // cout<<a<<" "<<b<<endl;
       if(b>a){
        for(int i=0;i<x;i++){
       if(v[i][j]==0) v[i][j]=1;
           else v[i][j]=0;
    }
       }
   }
    cout<<endl<<"output 2 "<<endl;
  for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
  }
}