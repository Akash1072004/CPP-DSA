#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the number of rows in 1st array\n";
    cin>>x;
    int y;
    cout<<"enter the number of clos in 1st array\n";
    cin>>y;
    int a[x][y];
    int m;
    cout<<"enter the number of rows in 2nd array\n";
    cin>>m;
    int n;
    cout<<"enter the number of clos in 2nd array\n";
    cin>>n;
    int b[m][n];
    if(y==m){
        cout<<"enter the elements of 1st array\n";
        for(int i=0;i<x;i++){
            for(int j=0;j<y;j++){
                cin>>a[i][j];
            }
        }
         cout<<"enter the elements of 2nd array\n";
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>b[i][j];
            }
        }
        int res[x][n];
         for(int i=0;i<x;i++){  
            for(int j=0;j<n;j++){
                res[i][j]=0;
                for(int k=0;k<m;k++){
                    res[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        cout<<endl;
        for(int i=0;i<x;i++){
            for(int j=0;j<n;j++){
              cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else cout<<"multiplication can not possible";
}