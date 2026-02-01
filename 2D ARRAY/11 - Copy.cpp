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
     for(int i=0;i<x;i++){
        int h=y-1;
        if((i+1)%2==0){
          int j=0;
        while(j<=h/2){
                int temp = a[i][j];
                a[i][j]=a[i][h];
                a[i][h]=temp;
                h--;
                j++;
        }
        }
        else {
            for(int j=0;j<x;j++){
            a[i][j]=a[i][j];
        }
        }
    }
    for(int i=0;i<x/2;i++){
        int h=x-1;
        for(int j=0;j<y;j++){
            int temp = a[i][j];
            a[i][j]=a[h][j];
            a[h][j]=temp;
        }
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}