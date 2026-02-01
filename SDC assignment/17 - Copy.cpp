#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "enter x\n1 for factorial\n2 for prime\n3 for pattern\n";
    cin >> x;
    switch (x){
    case 1:{
        int n;
        cout << "Enter number : ";
        cin >> n;
        int f = 1;
        for (int i = 1; i <= n; i++)
        {
            f = f * i;
        }
        cout << "The Factorial of no. " << n << " is " << f;
        break;}
    case 2:{
        int n;
        cout << "Enter number : ";
        cin >> n;
        int c;
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                c = 1;
                break;
            }
        }
        if (c == 1)
        {
            cout << "Its not Prime";
        }
        else
            cout << "It's Prime";
        break;}
    case 3:{
        int n;
        cout << "Enter number : ";
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << " * ";
            }
            cout << endl;
        }
        break;}
    default:
    {
        cout << "you have entered wrong number";
        break;
    }
    }
}