#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<int>>matrix(m,vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    int target;
    cout<<"enter target : ";
    cin>>target;
       int i=0;
       int j=n-1;
       int s=0;
      while(i<m && j>=0){
        if(matrix[i][j]==target){
            s=1;
            break;
        }
        else if (matrix[i][j]<target)i++;
        else j--;
       }
      if(s==0) cout<<false;
      else cout<<true;
}