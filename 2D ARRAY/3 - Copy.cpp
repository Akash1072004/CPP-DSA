#include <iostream>
using namespace std;//Transpose of matrix ....
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
     for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
           cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}