#include <iostream>
using namespace std;//Spiral printing....
int main()
{
    int x, y;
    cout << "enter rows of 1st array : ";
    cin >> x;
    cout << "enter cols of 1st array : ";
    cin >> y;
    int a[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cin >> a[i][j];
        }
    }
    int tne=x*y;
    int e=0;
    int r = 0, r1 = x - 1, c = 0, c1 = y - 1;
    for (int i = 0; i < x; i++)
    {
        while(r<=r1 && c<=c1){
        for (int j = c; j <= c1 && e<tne; j++)
        {
            cout << a[r][j] << " ";
            e++;
        }
        r++;
        for (int j = r; j <= r1 && e<tne; j++)
        {
            cout << a[j][c1] << " ";
            e++;
        }
        c1--;
        for (int j = c1; j >= c && e<tne; j--)
        {
            cout << a[r1][j] << " ";
            e++;
        }
        r1--;
        for (int j = r1; j >= r && e<tne; j--)
        {
            cout << a[j][c] << " ";
            e++;
        }
        c++;
        }
    }
}