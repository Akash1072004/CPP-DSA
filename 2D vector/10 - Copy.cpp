#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int x, y;
    cout << "enter rows : ";
    cin >> x;
    cout << "enter cols : ";
    cin >> y;
    vector<vector<int>> v(x, vector<int>(y));
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cin >> v[i][j];
        }
    }
    cout << endl;
    int s = 0;
    int r1 = 0, r = x - 1, c1 = 0, c = y - 1;
    while (r1 <= r && c1 <= c)
    {
        if (c1 + 1 < y && r1 + 1 < x)
        {
            if (v[r1][c1 + 1] <= v[r1 + 1][c1])
            {
                cout << "if : " << v[r1][c1] << endl;
                s = s + v[r1][c1];
                c1++;
            }
            else
            {
                cout << "else : " << v[r1][c1] << endl;
                s = s + v[r1][c1];
                r1++;
            }
        }
        if (c1 == c)
        {
           if(r1<x){
             s = s + v[r1][c1];
            cout << "if 2 : " << v[r1][c1] << endl;
            r1++;
           }
        }
        else if (r1 == r)
        {
            if(c1<y){
                s = s + v[r1][c1];
            cout << "else if 2 : " << v[r1][c1] << endl;
            c1++;
            }
        }
    }
    cout << endl;
    cout << r1 << " " << c1;
    cout << endl;
    cout << "sum is " << s;
}