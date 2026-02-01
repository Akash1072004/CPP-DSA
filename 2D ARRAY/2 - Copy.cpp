#include <iostream>
using namespace std;//addition of two 2D array...   
int main()
{
    int x;
    cout<<"enter no. of rows\n";
    cin >> x;
    int y;
    cout<<"enter no. of columns\n";
    cin >> y;   
    int arr[x][y];
    cout<<"elements of 1st array\n";
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cin >> arr[i][j];
        }
    }
    int a,b;
    cout<<"enter no. of rows\n";
    cin >> a;
    cout<<"enter no. of columns\n";
    cin >> b;
    int brr[a][b];
    if(a==x && b==y){
    cout<<"elements of 2nd array\n";
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> brr[i][j];
        }
    }
    int crr[x][y];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            crr[i][j]=arr[i][j]+brr[i][j];
        }
    }
    cout<<"sum of all the elements in 2d array is \n";
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
           cout<<crr[i][j]<<" ";
        }
        cout<<endl;
    }
    }
    else cout<<" addition is not possible";
}