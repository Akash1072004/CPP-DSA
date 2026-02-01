#include <iostream>
#include <climits> //max and second max of all elements....
using namespace std;
int main()
{
    int x;
    cin >> x;
    int y;
    cin >> y;
    int arr[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cin >> arr[i][j];
        }
    }
    int max = INT_MIN;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            if (max < arr[i][j])
                max = arr[i][j];
        }
    }
    cout << "max of all the elements is " << max;
    cout<<endl;
    int sm = INT_MIN;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            if (arr[i][j] == max)
                continue;
            else
            {
                if (sm < arr[i][j])
                    sm = arr[i][j];
            }
        }
    }
    cout << "second max of all the elements is " << sm;
}