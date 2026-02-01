#include <iostream>
using namespace std;//swap the 2D Array...   
int main()
{
    int x;
    cout<<"enter no. of rows and column\n";
    cin >> x;
    int arr[x][x];
    cout<<"elements of array\n";
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout<<endl;
     for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if(i<j){
            int temp=arr[i][j];
           arr[i][j]=arr[j][i];
           arr[j][i]=temp;
            }
            else continue;
        }
    }
     for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
          cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}