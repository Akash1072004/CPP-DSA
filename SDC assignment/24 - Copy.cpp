#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "enter x : ";
    cin >> x;
    int m = x/2+3;
    int j;
    for (int i = 1; i <= x; i++)
    {
        int z = 1;
        for (int j = 1; j <= x - i; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= 2*i-1; k++)
        {
            cout<<z<<" ";
            if(k<i)z++;
            else z--;
        }
        cout << endl;
    }
}