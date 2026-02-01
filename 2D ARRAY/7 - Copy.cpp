#include<iostream>
using namespace std;//rotate the array 2nd method....
int main(){
    int x,y;
    cout<<"enter rows : ";
    cin>>x;
    cout<<"enter cols : ";
    cin>>y;
    int a[x][y];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;
    for(int i=0;i<x;i++){
        for(int j=i;j<y;j++){
        int temp = a[i][j];
         a[i][j]=a[j][i];
         a[j][i]=temp;
        }
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
          cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<x;i++){
       int h=y-1;
       int j=0;
       while(j<y/2){
        int temp=a[i][j];
          a[i][j]=a[i][h];
          a[i][h]=temp;
          h--;
          j++;
       }
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
          cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

}