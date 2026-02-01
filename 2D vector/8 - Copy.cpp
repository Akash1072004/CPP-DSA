#include <iostream>
#include<vector>
using namespace std;//searching the element..
int main(){
  int x,y,z;
  cout<<"enter the number of rows : ";
  cin>>x;
  cout<<"enter the number of cols : ";
  cin>>y;
  cout<<"enter the value you want to find : ";
  cin>>z;
  vector<vector<int>>v(x,vector<int>(y));
  for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
        cin>>v[i][j];
    }
  }
  int r=x-1,c=y-1,r1=0,c1=0,d=0,e=0,h=0;
  for(int i=r;i>=0;i--){
    for(int j=0;j<y;j++){
       if(v[r1][c]>z){
        c--;
        e++;
        if(c<c1){
          h=1;
          break;
        }
       }
       else if(v[r1][c]<z){
        r1++;
        e++;
        if(r1>r){
          h=1;
          break;
        }
       }
       else if (v[r1][c]==z){
        d=1;
        e++;
        break;
       }
    }
    if(d==1){
        cout<<"true";
        cout<<endl<<e;
        break;
    }
    else if(h==1){
        cout<<"false"<<endl;
        cout<<e;
        break;
    }
  }  
}
