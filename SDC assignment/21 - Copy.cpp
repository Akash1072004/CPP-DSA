#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    for (int i = 1; i <= x; i++)
    {
        int a = 65;
        for (int j = 1; j <= i; j++)
        {
            char ch = (char)a;
            if (i % 2 == 0)
            {
                cout << ch << " ";
                a++;
            }
            else
                cout << j << " ";
        }
        cout << endl;
    }
}