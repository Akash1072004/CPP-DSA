#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int x;
void p(vector<int> v)
{
    int idx;
    for (int i = x - 1; i >= 0; i--)
    {
        if (v[i] > v[i - 1])
        {
            idx = i - 1;
            // cout << idx;
            break;
        }
    }
    // cout << endl;
    if (idx == x - 2)
        swap(v[idx], v[x - 1]);
    else
    {
        int j = idx;
        int i = x - 1;
        while (i >= idx)
        {
            int temp = v[i];
            v[i] = v[idx];
            v[idx] = temp;
            i--;
            idx++;
        }
        // for (int i = 0; i < x; i++)
        // {
        //     cout << v[i] << " ";
        // }
        // cout << endl;
        swap(v[j], v[j + 1]);
    }
    cout<<"next largest array is ";
    for (int i = 0; i < x; i++)
    {
        cout << v[i] << " ";
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
    p(v);
}