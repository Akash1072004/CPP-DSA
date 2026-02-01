#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter rows of 1st array : ";
    cin>>x;
    cout<<"enter cols of 1st array : ";
    cin>>y;
    int a[x][y];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin>>a[i][j];
        }
    }
    int m,n;
    cout<<"enter rows of 2nd array : ";
    cin>>m;
    cout<<"enter cols of 2nd array : ";
    cin>>n;
    int b[m][n];
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>b[i][j];
        }
    }
    if(y==m){
    int c[x][n];
     for(int i=0;i<x;i++){
        for(int j=0;j<n;j++){
            int s=0;
            for(int k=0;k<m;k++){
                s=s+(a[i][k]*b[k][j]);
            }
            c[i][j]=s;
        }
    }
     for(int i=0;i<x;i++){
        for(int j=0;j<n;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    }
    else cout<<"multiplication can't possible";
}