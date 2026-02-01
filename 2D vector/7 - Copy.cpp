#include <iostream>
#include<vector>
using namespace std;//flipping the the matrix;
 int x,y;
 int q=0,w=0;
int binary(vector<vector<int>>&v,int i){
    int a=1;
    q=0;
    for(int j=y-1;j>=0;j--){
         if(v[i][j]==1)v[i][j]=0;
    else if(v[i][j]==0)v[i][j]=1;
     q=q+(v[i][j]*a);
        a=a*2;
   }
   return q;
}
// int second(vector<vector<int>>&v,int j){
//     int a=1;
//     w=0;
//     for(int i=x-1;i>=0;i--){
//          if(v[i][j]==1)v[i][j]=0;
//     else if(v[i][j]==0)v[i][j]=1;
//      w=w+(v[i][j]*a);
//         a=a*2;
//    }
//    return w;
// }
int main(){
 cout<<"enter row : ";
 cin>>x;
 cout<<"enter columns : ";
 cin>>y;
 vector<vector<int>>v(x,vector<int>(y));
 for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
        cin>>v[i][j];
    }
 }
 for(int i=0;i<x;i++){
    int s=0,a=1;
    for(int j=y-1;j>=0;j--){
        s=s+(v[i][j]*a);  
        a=a*2;
    }
   binary(v,i);
    // cout<<s<<" "<<q<<endl;
    if(s>q){
       for(int j=0;j<y;j++){
        if(v[i][j]==1)v[i][j]=0;
    else if(v[i][j]==0)v[i][j]=1;
    } 
    }
 }
 cout<<endl<<"output 1"<<endl;
 for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
       cout<<v[i][j]<<" ";
    }
    cout<<endl;
 }
 for(int j=1;j<y;j++){
    int s=0,a=0;
 for(int i=0;i<x;i++){
       if(v[i][j]==0)s++;
       else a++;
 }
    // cout<<s<<" "<<q<<endl;
    if(s>a){
       for(int i=0;i<x;i++){
        if(v[i][j]==1)v[i][j]=0;
    else if(v[i][j]==0)v[i][j]=1;
    } 
    }
 }
 cout<<endl<<"output 2"<<endl;
 for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
       cout<<v[i][j]<<" ";
    }
    cout<<endl;
 }
}
