#include<iostream>
using namespace std;//rotate anticlockwise the array 2nd method....
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
    for(int i=0;i<x/2;i++){
       int h=x-1;
       int j=0;
       while(j<y){
        int temp=a[i][j];
          a[i][j]=a[h][j];
          a[h][j]=temp;
          j++;
       }
       h--;
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
          cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

}