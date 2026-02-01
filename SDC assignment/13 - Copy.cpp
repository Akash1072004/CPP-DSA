#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n : ";
    cin >> n;
    if (n%2==0){
        n = n+1;
    }
    else n = n;
    int mid = n/2+1;
    int a = n/2;
    int b = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= b; k++)
        {
            cout << "* ";
        }
        if(i<mid){
            a--;
            b = b +2;
        }
        else if(i>=mid){
            a++;
            b = b -2;
        }
        cout << endl;
    }
}