#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "enter x : ";
    cin >> x;
    int m = x;
    int j;
    for (int i = 1; i <= x; i++)
    {
        int z = i;
        for (int j = 1; j <=  i; j++)
        {
            cout <<"  ";
        }
        for (int k = 1; k <= x - i; k++)
        {
            cout <<z<<" ";
            z++;
        }

        cout << endl;
    }
}