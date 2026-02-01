#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
    
        for (int j = 1; j <= i-1; j++)
        {
            cout <<"  ";
        }
        for (int k = 1; k <=n-i; k++)
        {
            cout << "* ";
        }
        for (int l = 1; l <= n - i-1; l++)
        { 
            cout << "* ";
        }
        cout << endl;
        
    }
}