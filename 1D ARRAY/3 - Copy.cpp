 #include <iostream>
#include <vector>
using namespace std;
int main()
{
    int x;
    cin >> x;
    vector<int> v(x); 
    for (int i = 0; i < v.size(); i++)//we can use 'x' in place of v.size;
    {
        cin >> v[i];
    }
    cout << endl;
    int y;
    cout << "enter the number that you want to find by sum of two array" << endl;
    cin >> y;
    cout << endl;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j <= i; j++) //we can also do it here that we can use j = i+1 instead of j==0
        {                               //because loop work in j after the i = 0 start to i<x for sum of two number;
            if (v[i] + v[j] == y)
                cout << "index = " << i << " " << "index = " << j << endl;
        }
    }
}