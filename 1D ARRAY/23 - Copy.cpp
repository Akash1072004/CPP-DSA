#include <iostream>
#include <vector>
using namespace std;
int x;
void first(vector<int> &v)
{
    int a, b;
    int y = 0;
    for (int j = 0; j < x; j++)
    {
        for (int i = y; i < x; i++)
        {
            if (v[i] > v[i + 1])
            {
                a = i;
                break;
            }
        }
        cout << a << endl;
        for (int i = a + 1; i < x; i++)
        {
            if (v[i] >= v[a])
            {
                b = i;
                break;
            }
        }
        cout << b << endl;
        int c = b - a - 1;
        cout << c << endl;
        int d = v[a] * c;
        for (int i = a + 1; i < b; i++)
        {
            d = d - v[i];
        }
        cout << d << " sort" << endl;
        y = b;
    }
}
int main()
{
    cin >> x;
    vector<int> v(x);
    for (int i = 0; i < x; i++)
    {
        cin >> v[i];
    }
    first(v);
}