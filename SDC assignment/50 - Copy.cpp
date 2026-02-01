#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x,y,m,n;
    cout<<"enter row of 1st matrix : ";
    cin>>x;
    cout<<"enter cols of 1st matrix : ";
    cin>>y;
    vector<vector<int>>v(x,vector<int>(y));
     for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
           cin>>v[i][j];
        }
    }
    cout<<"enter row of 2nd matrix : ";
    cin>>m;
    cout<<"enter cols of 2nd matrix : ";
    cin>>n;
    vector<vector<int>>v1(m,vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           cin>>v1[i][j];
        }
    }
   if(x==m && y==n){
     int a=0;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            if(v[i][j]!=v1[i][j])a=1;
            break;
        }
        if(a==1){
            cout<<"matrices are not identical";
            break;
        }
    }
    if(a==0)cout<<"matrices are identical";
   }
   else cout<<"matrices are not identical";
}