#include <iostream>
using namespace std;//Rotate the 2D Array...   
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
        for (int j = i+1; j < x; j++)
        {
          swap(arr[i][j],arr[j][i]);
        }
    }
     for (int i = 0; i < x; i++)
    {
        int h=x-1;
        int j=0;
        while(j<=h)
        {
        int temp = arr[i][j];
        arr[i][j]=arr[i][h];
        arr[i][h]=temp;
         j++;
         h--;
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